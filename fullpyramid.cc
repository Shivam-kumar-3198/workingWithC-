 /*
  #include<iostream>
  using namespace std;
  int main(){
    int n;
    cin >> n;
for(int row=0; row<n; row= row+1){
    for(int row=0; row<n; row= row+1){
        cout <<"";
    }

    //stars
    for(int col=0; col<row+1; col = col+1){
        cout << "* ";
    }
    cout << endl;
  }
  }
  */
  #include<iostream>
  using namespace std;
  int main(){
        int n;//int n;: This line declares a variable named n of type integer. It’s like reserving a memory slot to store a whole number.
        cin >> n;//cin >> n;: Here, we’re using the cin object to read input from the user. Specifically, we’re reading an integer value and storing it in the variable n. So, if the user enters a number (e.g., 5), n will hold that value
        for(int row=0;row<n; row=row+1){
for(int row=0; row<n; row=row+1){
  cout<<"";
}
for(int col=0;col<row+1; col=col+1){
  cout<<"*";
}
cout<<endl; 
        }
  }