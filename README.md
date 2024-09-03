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
Benefits of using fgets:
Security : fgets Prevents BufferOverflow By Limiting The Size Of The array, Thus Preventing Memory Limits From Being Overwritten.
Ease of use : Provides a Simple Interface For Reading And Storing Text Data Securely.
