# C++ Tricks for CP:

1. For fast input and output, use below before any cin or cout.

#### ios_base::sync_with_stdio(false); 
This turns off synchronization of C++ standard streams with the corresponding C standard streams.

#### cin.tie(NULL);
Unties input and output stream (No flushing happens)

2. Prefer to use "\n" over endl for new line 
since endl causes flush operation.

3. Use the header file which is (g++ specific)
> #include <bits/stdc++.h>

4. Template:

> #include <bits/stdc++.h> <br>
> using namespace std; <br>
> int main() { <br>
>   ios_base::sync_with_stdio(false); <br>
>   cin.tie(NULL); <br>
>   cout.tie(NULL); <br>
>   for(int i=0; i<10; i++) { <br>
>   // Read input from the testcase <br>
>   // Implement the logic <br>
>  // Write the output for the testcase<br>
>   } <br>
>  return 0; <br>
> } <br>

5. getline(cin, str);
Reads the entire line along with the whitespaces from the input stream and stores it in the string str.