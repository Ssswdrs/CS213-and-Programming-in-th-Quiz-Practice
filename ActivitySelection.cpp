#include<iostream>
#include<algorithm>
using namespace std;
   typedef struct Activitiy {
      int start, end;
   }Act;
   bool comp(Act act1, Act act2) {
      return (act1.end < act2.end);
   }
   void maxAct(Act act[], int n) {
   sort(act, act+n, comp);
   int i = 0,ans = 1;
   for (int j = 1; j < n; j++) {
      if (act[j].start >= act[i].end) {
         ans++;
         i = j;
      }
   }
   cout << ans ;
}
int main() {
   int n;
   cin >> n;
   Act actArr[n];
   for(int i=0;i<n;i++){
   		cin >> actArr[i].start >> actArr[i].end;
	}
   maxAct(actArr,n);
   return 0;
}
//https://www.tutorialspoint.com/activity-selection-problem-greedy-algo-1-in-cplusplus
