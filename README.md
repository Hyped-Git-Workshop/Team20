# Git Exercise

1. Each person in the pair needs to `git clone` this repo
2. Decide, who is Person A and who is Person B
3. Tasks will be appearing below. After you complete one, another one appears. There is 10 in total.
4. First 6 tasks are always only for one person (it alternates between A and B)
5. In the remaining tasks, you will work in parallel and might even need to resolve some conflicts.

## Tasks
1. Person A - `pod.cpp` - Name your pod
    * Open `pod.cpp` file and locate TASK 1
    * Type the name for your pod inside the double-quotes (you should discuss the choice of the name with your teammate)
2. Person B - `pod.cpp` - Choose max speed
    * Open `pod.cpp` file and locate TASK 2
    * Tell us what the max speed of your pod is by replacing the 0 in the code with a real number
3. Person A - `pod.h` and `pod.cpp` - Tempereture inside the pressure vessel
    * Open `pod.h`, locate place for TASKS 3&4 and copy-paste the following line there
        ```c++
        double get_temperature();
        ```
    * Open `pod.cpp`, locate place for TASKS 3&4 and copy-paste the following code there (you can change the 0 there if you want a more comfortable temperature)
        ```c++
        double Pod::get_temperature()
        {
          return 0;
        }
        ```
    * When done, commit both files in a single commit (ofc don't forget push and stuff as always)
4. Person B - `pod.h` and `pod.cpp` - Pressure inside the pressure vessel
    * Open `pod.h`, locate place for TASKS 3&4 and copy-paste the following line below the one from previous task
        ```c++
        double get_pressure();
        ```
    * Open `pod.cpp`, locate place for TASKS 3&4, copy the following code and paste it below the function from previous task (you can change the 0 there if you want a more comfortable pressure)
        ```c++
        double Pod::get_pressure()
        {
          return 0;
        }
        ```
    * When done, commit both files in a single commit (ofc don't forget push and stuff as always)
5. Person A - `main.cpp` and `Makefile` - Main executable
    * Create a new file called `main.cpp` and copy the following code to it
        ```c++
        #include <iostream>
        #include "pod.h"

        int main()
        {
          Pod pod;
          std::cout << "Name: " << pod.get_name() << std::endl;
          std::cout << "Maximum speed: " << pod.get_max_speed() << std::endl;
          std::cout << "Temperature: " << pod.get_temperature() << std::endl;
          std::cout << "Pressure: " << pod.get_pressure() << std::endl;
          return 0;
        }
        ```
    * Open `Makefile`, locate place for TASK 4 and uncomment the code there to get something like
        ```mk
        main : main.o pod.o bms.o navigation.o accelerometer.o
	        $(CC) $(OBJS) $(LFLAGS) main.o -o main

        main.o : main.cpp pod.h bms.h navigation.h accelerometer.h
	        $(CC) $(CFLAGS) main.cpp
        ```
    * Notice the difference in the output of `git status` for the newly created file
    * Commit `main.cpp` and `Makefile` in separate commits



### Summary of tasks
|Task # | Person A                                                         | Person B                                                     |
|:----|--------------------------------------------------------------------|--------------------------------------------------------------|
| 1 | Name your pod - edit `pod.cpp`                                       |                                                              |
| 2 |                                                                      |  Max speed - edit `pod.cpp`                                  |
| 3 | Pressure vessel temperature - edit `pod.h` and `pod.cpp`             |                                                              |
| 4 |                                                                      | Pressure vessel pressure - edit `pod.h` and `pod.cpp`        |
| 5 | Create `main.cpp` and update `Makefile`                              |                                                              |


