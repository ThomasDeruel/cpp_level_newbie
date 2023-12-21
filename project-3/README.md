# Projet 3 : Voyance (oui ou non)

![](https://media0.giphy.com/media/v1.Y2lkPTc5MGI3NjExdThrYngyMWUzOW1xOG1tZGttOWYxdHd2bzBlcnJ4NHhhaXRkZWQwdSZlcD12MV9pbnRlcm5hbF9naWZfYnlfaWQmY3Q9Zw/mIvhvr0Jo8tcaqZ7G5/giphy.gif)

## Ce que j'ai appris

`std::getline` lit les caractères d'un flux d'entrée et les place dans une chaîne de caractères. Il prend en compte les espaces contrairement à `std::cin` qui ne prend qu'un caractère.

```cpp
    std::getline(std::cin, name)

    cout << "Hello " << name ;
```