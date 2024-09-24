# String Class Function
## Defining and Assigning String Objects 
 - It can be assigned in 3 ways :
  - string name("Abhishek"):
  - string name = "Abhishek";
  - string name;
    - cin>>name;
## I/O with string Objects
- Just the word :
  - cin>>[variable_name];
- Whole sentence :
  - getline(cin,[variable_name]);
    - in this you can give input till you press enter.
    - Or you can have it custom till you like by changing the end term.
    - getline(cin,[variable_name],[end_char]);
## Finding string Object
- this is used to find the string in a string object.
  - To find the word.
    - USE : variable_name.find(searching_variable);
  - To find the element of the word.
    - USE : variable_name.find_first_of(from_the_word);
    -     : variavle_name.find_first_not_of(from_the_word);
  - This function can be used in a reverse way.
    - USE : variable_name.find_last_of(from_the_word);
    -     : variable_name.find_last_not_of(from_the_word);
## Modification String Object
### 1. variable_name.erase([start],[stop]);
### 2. variable_name.replace([start],[stop],[Word]);
### 3. variable_name.inset([pos],[word]);
### 4. variable_name.append([time],[element]);
### 5. variable_name.substr([start],[stop]);

## To access the character is string Object
- 1. we can access it like a array.
- 2. Or we can use the " at " key word.