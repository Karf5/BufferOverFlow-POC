# BufferOverFlow-Proof Of Concept

This Is A Simple Code I Made It For Cyber Security Researchers And For Every One Who Want To Know How The BufferOverFlow Vulnerability Working

You Will Need The GCC Compiler To Compile And Run The Code

To Compile The Code, You Must Open The Terminal And Go To The File Location And Write The Command Below:
```sh
gcc BufferOverFlow-POC.c -o app
```

After That Write The Command Below To Run The Code:
```sh
./app
```

To Fix This Vulnerability You Will Need To Replace The scanf In Line Number 27 In BufferOverFlow-POC.c File With The Code Below:
```sh
fgets(user_name_input, sizeof(user_name_input), stdin);
```

How fgets Work :

Reading From Input : fgets Reads Text From stdin (usually user input from the keyboard) And Stores It In The array user_name_input.

Maximum Number Of Characters : fgets Reads Up To sizeof(user_name_input) - 1 characters. This Leaves Room For The Ending Character '\0' Which Is Automatically Added To The End Of The string To Mark Its End.

End-of-line Entry : If More Than The array Size Is Entered, fgets Truncates The Entry When The Maximum Is Reached. If There Is Space In The array, And There Is A Line Terminator ('\n') In The Input, This Character Is Stored In The array As Well, And Then The '\0' Terminator Is Added After It.

End-of-line Checking : If There Is An End-Of-Line In The Input, It Is Stored In The array, And This Can Require Additional Processing To Remove This End If It Is Not Required In The Program.



Benefits of using fgets:

Security : fgets Prevents BufferOverflow By Limiting The Size Of The array, Thus Preventing Memory Limits From Being Overwritten.

Ease of use : Provides a Simple Interface For Reading And Storing Text Data Securely.
