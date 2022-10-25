# Push-Swap
A project to sort data on a stack, with a limited set of instructions, using the lowest possible number of actions. 

Learning : The project is about application of Sorting Algorithms and its usage in checking :) 

## Outcome from the Project : 

Implementation of various Sorting Algorithms : 

1. Bubble Sort : 

   <img width="340" alt="image" src="https://user-images.githubusercontent.com/66947064/197652975-5fe76620-ab49-4e66-82ae-bfe6e86e1638.png"> <img width="340" alt="image" src="https://user-images.githubusercontent.com/66947064/197653028-d5716dbb-f9e6-4490-9115-c85e3bb486cf.png">

2. Quick Sort :

   <img width="340" alt="image" src="https://user-images.githubusercontent.com/66947064/197653290-0ade4fb8-1631-441c-b357-64c86c3235dd.png"> <img width="340" height="155" alt="image" src="https://user-images.githubusercontent.com/66947064/197653332-c8fc8e07-6697-47b5-a7cc-8788adecdc3f.png">

3. Insertion Sort :

      <img width="265" height="150" alt="image" src="https://user-images.githubusercontent.com/66947064/197653656-4925941a-adba-400c-9f52-6ae3c59af077.png">     <img width="450" alt="image" src="https://user-images.githubusercontent.com/66947064/197653983-4c0730c7-f280-4b28-a5c2-8c3251c71975.png">  <img width="315" alt="image" src="https://user-images.githubusercontent.com/66947064/197654209-af2f1880-eac8-446d-8100-333687480162.png">


......... Other ideas are commented inside the function of the code ...............

Data Structures Used : 

1. Singly Linked List with Double Pointers as variables -->>
<img width="868" alt="image" src="https://user-images.githubusercontent.com/66947064/197654603-b05279d6-420f-4171-8410-631743b7d9d0.png">

Source: https://dev-notes.eu/2018/07/double-pointers-and-linked-list-in-c/ (Check it good one)

N:B: Any algorithm can be implemented on different Data Structure ( Array or Linked list / etc) be implemented.
Look into this in details : https://www.geeksforgeeks.org/what-should-i-learn-first-data-structures-or-algorithms/

.......... .    More Learning Outcome from the Project .............

1. Configuring the Debugger (lldb / gdb) --> VS Code debugging is really not worthwhile -_- And then once you run it. Then its good. The launch.json file      is the key. Also if it acts weirdly delete the .vscode folder you have inside your project. Maintain your workspace folder or define the program manually and input of the Arguments ( Remember to give ( "" ) in between. 

2. Doing any algorithmic project needs a visualizer or the full usage of a debugger . Be really careful what's happening !!

3. Memory Leaks / Seg Fault -->> 3 common ways to detect -->>

**(Mac OS):** 1. ```leaks --atExit -- ./prog_name Args ```

 Run  ``` Export MallocStackLogging=1 ``` Extension to see detailed results.
src: https://developer.apple.com/library/archive/documentation/Performance/Conceptual/ManagingMemory/Articles/MallocDebug.html

**(Mac OS/Linux):**       

2. ```Valgrind --leak-check=full ./prog_name Args.``` 
      You can use `-s`  to suppress the leaks from the MAC library and also it might show you the Invalid Read/Write Errors which is suppressed due to overwhelming leaking issues from general MAC library.

***(Mac OS/Linux): ** 

 3. ```--fsanitize=address```  flag while compiling . Remember must to use``` -g``` flag also whenever you want to Debug something. 
           Once you found the error search it in google with the error name / address it might give you a hint where to look if 
           you don't have any.
           
   Disclaimer : Don't follow blindly only one tools to check. Use any one of them. Each gives you different perspectives. So get on full swing with memory leaks and also don't forget to ask peers if you face this: 
   
![tumblr_55bdff208b4a006a801d369a54514df9_e56fc238_500](https://user-images.githubusercontent.com/66947064/197657211-5a717e6e-5c20-4843-950b-98a5196887b9.gif)


Some Recommendations I gathered from Peer-learning (Will add later more) -->>>>

<img width="340" alt="image" src="https://user-images.githubusercontent.com/66947064/197656298-4484ab5b-1b31-4ff3-9cf0-6f10f43ef9de.png">
src: https://developer.ibm.com/articles/au-toughgame/

         
