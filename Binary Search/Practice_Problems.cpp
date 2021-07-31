//**************************************************************************************************************

//                              First and last occurance of a number in a sorted array
//______________________________________________________________________________________________________________
// #include<iostream>
// #include<algorithm>

// using namespace std;

// int* binSearch(int arr[], int n, int k, int ar[]){
//     int left = 0, right = n-1, mid=(left+right)/2, indStart=-1, indEnd=-1;
//     while(right>=left){
//         if(arr[mid]==k){
//             indStart=mid;
//             right = mid-1;
//         } else if (arr[mid]>k){
//             right = mid-1;
//         } else if (arr[mid]<k){
//             left = mid+1;
//         }
//         mid = (left+right)/2;
//     }
//     left = 0;
//     right = n-1;
//     mid=(left+right)/2;
//     while(right>=left){
//         if(arr[mid]==k){
//             indEnd=mid;
//             left = mid+1;
//         } else if (arr[mid]>k){
//             right = mid-1;
//         } else if (arr[mid]<k){
//             left = mid+1;
//         }
//         mid = (left+right)/2;
//     }
//     ar[0] = indStart;
//     ar[1] = indEnd;
//     return(ar);
// }

// int main(){
//     int a[] = {2,3,4,5,5,5,5,5,5,5,12,14};
//     int key = 5;
//     int pos[2];
//     binSearch(a, 12, key, pos);
//     cout<<"The key ["<<key<<"] starts from: "<<pos[0]<<" and ends at: "<<pos[1]<<endl;
//     return(0);
// }

//**************************************************************************************************************

//                           Binary search using stl and first and last index 
//______________________________________________________________________________________________________________

// #include<iostream>
// #include<algorithm>

// using namespace std;

// int main(){
//     int a[] = {2,3,4,5,5,5,5,5,5,5,12,14};
//     int b[] = {2,3,5,6,9};
//     int key = 5;

//     //check presence

//     bool present = binary_search(b,b+5,key);
//     if(present){
//         cout<<"Key ["<<key<<"] is present"<<endl;
//     } else{
//         cout<<"Key ["<<key<<"] is not present"<<endl;
//     }

//     //check first/last occurence
//     //lower bound return address of first element that is >= key
//     //upper bound returns address of first element that is > key
//     //here auto can be replaced with int*
//     auto first = lower_bound(a,a+12,key);
//     auto last = upper_bound(a,a+12,key);
//     cout<<"Lower bound and Upper bound of ["<<key<<"] are: "<<(first-a)<<" and "<<(last-a)<<" respectively"<<endl;

//     return(0);
// }

//**************************************************************************************************************

//                             Square root (floor)
//______________________________________________________________________________________________________________
// #include<iostream>
// #include<algorithm>

// using namespace std;

// int main(){
//     int n = 50;
//     int left = 0;
//     int right = n+1/2;//to always get the halfway value regardless of odd or even
//     int mid = (right+left)/2;
//     int res;
//     while(left<=right){
//         if(mid*mid==n){
//             res=mid;
//             break;
//         } else if (mid*mid<n){
//             left=mid+1;
//             res = mid;
//         } else if (mid*mid>n) {
//             right = mid-1;
//         }
//         mid = (right+left)/2;
//     }   
//     cout<<"Square root of ["<<n<<"] is: "<<res<<endl;

//     return(0);
// }

//**************************************************************************************************************

//                                          Aggressive Cows
//______________________________________________________________________________________________________________

// #include<iostream>
// #include<algorithm>

// using namespace std;

// bool willCowsFit(int* sheds, int n ,int cows, int dif){
//     int lastCowShed = sheds[0];
//     int count = 1;
//     for(int i=1;i<n;i++){
//         if(sheds[i]-lastCowShed>=dif){
//             lastCowShed = sheds[i];
//             count++;
//             if(count==cows){
//                 return true;
//             }
//         }
//     }
//     return false;
// }

// int main(){
//     int n=5,c=3;
//     int res,maxDif; 
//     int stalls[] = {1,2,8,4,9};
//     sort(stalls, stalls+n);
//     maxDif = stalls[n-1]-stalls[0];
//     int left = 0, right = maxDif, mid = (left+right)/2;
//     while(left<=right){
//         if(willCowsFit(stalls, n, c, mid)==true){
//             res=mid;
//             left = mid+1;
//         } else if (willCowsFit(stalls, n, c, mid)==false){
//             right = mid-1;
//         }
//         mid = (left+right)/2;
//     }
//     cout<<"The distance between the closest cows is: "<<res<<endl;

//     return(0);
// }

//**************************************************************************************************************

//                                                book-page-student problem
//______________________________________________________________________________________________________________

// #include<iostream>
// #include<algorithm>

// using namespace std;

// bool minPossiblePages(int books[], int totalBooks, int students, int min){
//     int studentUsed = 1;
//     int check = 0;
//     for(int i=0;i<totalBooks;i++){
//         if(check + books[i] > min){
//             studentUsed++;
//             check = books[i];
//             if(studentUsed > students){
//                 return false;
//             }
//         } else{
//             check += books[i];
//         }
//     }
//     return true;
// }

// int main(){
//     int n=2,m=4,res;
//     int books[m] = {10, 20, 30, 40};
//     int prefixBooks[m];
//     int preSum=0;
//     for(int i=0;i<m;i++){
//         preSum+=books[i];
//         prefixBooks[i]=preSum;
//     }
//     int left = books[m-1], right = prefixBooks[m-1], mid = (left+right)/2;
//     while(left<=right){
//         if(minPossiblePages(books, m, n, mid)){
//             right = mid-1;
//             res = min(res,mid);
//         } else{
//             left = mid+1;
//         }
//         mid = (left+right)/2;
//     }
//     cout<<"Maximum pages read by any single student are: "<<res<<endl;

//     return(0);
// }

//**************************************************************************************************************

//                                                    Cooking Parathas
//______________________________________________________________________________________________________________

// #include<iostream>
// #include<algorithm>

// using namespace std;

// bool canCook(int cooks[], int numCooks, int par, int time){
//     int totalPar = 0;
//     for(int i=0;i<numCooks;i++){
//         int timeElapsed = 0;
//         for(int j=1;j<=par;j++){
//             if(timeElapsed+j*cooks[i]<=time){
//                 totalPar++;
//                 if(totalPar==par){
//                     return true;
//                 }
//             } else{
//                 break;
//             }
//             timeElapsed += j*cooks[i];       
//         }
//     }
//     return false;
// }

// int main(){
//     int p, numCooks, res;
//     p = 10, numCooks = 4;
//     int cooks[] = {1,2,3,4};
//     int left = 0, right = p*(p+1)/2, mid = (left+right)/2;
//     while(left<=right){
//         if(canCook(cooks, numCooks, p, mid)){
//             res = mid;
//             right = mid-1;
//         } else{
//             left = mid+1;
//         }
//         mid = (left+right)/2;
//     }
//     cout<<"The minimum time is: "<<res<<endl;

//     return(0);
// }

//**************************************************************************************************************

//                                               Painter Partition
//______________________________________________________________________________________________________________

#include<iostream>
#include<algorithm>

using namespace std;



int main(){
    

    return(0);
}