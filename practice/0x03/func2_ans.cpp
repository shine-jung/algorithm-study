// 합이 100인 쌍이 있는지 확인하는 함수

int func2(int arr[], int N){
  int occur[101] = {};
  for(int i = 0; i < N; i++){
    if(occur[100-arr[i]])
      return 1;
    occur[arr[i]] = 1;
  }
  return 0;
}
