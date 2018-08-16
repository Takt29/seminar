#include <cstdio>
#include <ctime>
#include <regex>

using namespace std;

#define FAILED -1

/* 自作エンジン */

int my_regex_match(const char *text, const char *pattern) {
  return 3; //最も左のmatch位置(0-index)
  return FAILED; //match失敗
}

/* ジャッジ */

int stl_regex_match(const char *text, const char *pattern){
  match_results<string::const_iterator> mr;
  auto r = regex(pattern);
  string s = text;
  
  bool result = regex_search(s, mr, r);
  
  if (result)
    return mr.position(0);
  else
    return FAILED;
}

void strip(char *s){
  while(s[0]){
    if(s[1] == '\n') s[1] = '\0';
    s++;
  }
}

int main(int argc, char **argv){
  
  if(argc != 2){
    fprintf(stderr, "Usage: %s testcase.txt\n", argv[0]);
    exit(1);
  }

  int T, N;
  char pattern[1002], str[10002], N_str[20], T_str[20];
  
  FILE *f = fopen(argv[1], "r");

  if (!f) {
    fprintf(stderr, "File Open Error.\n");
    exit(1);
  }
  
  fgets(T_str, 10, f);
  strip(T_str);
  T = atoi(T_str);
  
  while(T--){
    fgets(pattern, 1001, f);
    fgets(N_str, 10, f);

    strip(pattern);
    strip(N_str);
    N = atoi(N_str);

    printf("=======================\n");
    printf("Pattern: %s\n", pattern);
    
    for(int i=0;i<N;i++){
      fgets(str, 10001, f);
      strip(str);
      
      printf("\n--- Case %d ---\n", i+1);

      int str_length = strlen(str);

      if(str_length <= 60)
        printf("Text: %s\n", str);
      else
        printf("Text: %.25s...%s(len: %d)\n", str, str + (str_length-25), str_length);
      
      int stl_res = stl_regex_match(str, pattern);

      clock_t startTime = clock(), endTime;
      int my_res = my_regex_match(str, pattern);
      endTime = clock();

      printf("Time: %.2lf[ms]\n", (double)((endTime-startTime) * 1000) / CLOCKS_PER_SEC);
      printf("Status: %s (STL: %d, MY: %d)\n", stl_res == my_res ? "AC" : "WA", stl_res, my_res);
    }
  }

  fclose(f);
  
}
