#include <stdio.h>

int main()
{
    char name[50];
    printf("======STUDY BUDDY====== \n");
    printf("\n");
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Welcome %s!", name);
    printf("\n\n");
//Notice that we don't put & before name. 
// For this character array, we pass its name directly.
//%s is the placeholder for a string. It gets replaced by the student's entered name.

int subject;
printf("Choose a subject: \n");
printf("1. Maths\n");
printf("2. Programming Fundamentals\n");
printf("3. English\n");

printf("%s Enter the subject that you want to practice today:", name);
scanf("%d", &subject);

if (subject == 1)
{
   printf("You have chosen Maths. Let's practice some problems!\n");
}
else if (subject == 2)
{
    printf("You have chosen Programming Fundamentals. Let's practice some problems!\n");
}
else if (subject == 3)
{
    printf("You have chosen English. Let's practice some problems!\n");
}
else
{
    printf("Invalid subject choice. Please restart the program and choose a valid subject.\n");
}
printf("\n\n");
//%d tells scanf() to read an integer.&subject tells it where to store that integer
//The double equal sign == checks whether two values are equal. It does not assign a value.



int score=0;
//score = 0 means the student starts with zero points.
int answer;
int right_answer;

if (subject == 1) 
{
 printf("========MATHS QUIZ======\n\n");

 printf("A. What does intigration generally represnet in calculus?\n");
 printf("1. Rate of change of function\n");
 printf("2. The reverse process of differentiation\n");
 printf("3. The slope of a straight line\n");
 scanf("%d", &answer);
  if (answer == 2)
  {
     printf("Correct!\n\n");
     score++;
  }
  else
  {
     printf("Incorrect.\n\n");
  }

 printf("B. Why do we add a constant of integration when findin an indefinite integral?\n");
 printf("1. Because the derivative of contant is zero\n");
 printf("2. Because integration always produces a constant\n");
 printf("3. Because every function have a constant value\n");
 scanf("%d", &answer);
  if (answer == 1)
 {
     printf("Correct!\n\n");
     score++;
  }
 else
 {
     printf("Incorrect.\n\n");
 }

 printf("C. What does a definite integral represent when the function is non-negative over the interval?\n");
 printf("1. The slope of the curve\n");
 printf("2. The average rate of change\n");
 printf("3. The area under the curve between the limits\n");
 scanf("%d", &answer);
 if (answer == 3)
 {
     printf("Correct!\n\n");
     score++;
 }
 else
 {
     printf("Incorrect.\n\n");
 }

 printf("D. What is the main fuction of purpose of the substitution method in integration?\n");
 printf("1. To simplify an integral by changing variables\n");
 printf("2. To convert an integral into derivative without calculation\n");
 printf("3. To remove the limit from every integral\n");
 scanf("%d", &answer);
 if (answer == 1)
 {
     printf("Correct!\n\n");
     score++;
 }
 else
 {
     printf("Incorrect.\n\n");
 }

 printf("E. According to the Fundamental Theorem of Calculus,\n how can a definite integral be evaluated when an antiderivative is known?\n");
 printf("1. Evaluate the antiderivative at the upper limit and subtract its value at the lower limit\n");
 printf("2. Multiply the antiderivative at the upper limit\n");
 printf("3. By applying the chain rule to the integrand\n");
 scanf("%d", &answer);
    if (answer == 1)
    {
        printf("Correct!\n\n");
        score++;
    }
    else
    {
        printf("Incorrect.\n\n");
    }

}
else if (subject == 2)
{
    printf("========PROGRAMMING FUNDAMENTALS QUIZ========\n\n");
    
 printf("A. What is the purpose of an algorithm?\n");
 printf("1. To decorate program\n");
 printf("2. To provide step by step instructions\n");
 printf("3. To store data in a structured format\n");
 scanf("%d", &answer);
 if (answer == 2)
 {
    printf("Correct!\n\n");
    score++;
 }
  else
 {
    printf("Incorrect.\n\n");
 }

 printf("B. What happens if a loop's stopping condition never becomes false?\n");
 printf("1. An infinite loop may occur\n");
 printf("2. The program will crash\n");
 printf("3. The loop will execute only once\n");
 scanf("%d", &answer);
 if (answer == 1)
 {
    printf("Correct!\n\n");
    score++;
 }
 else
 {
    printf("Incorrect.\n\n");
 }

 printf("C. What is debugging?\n");
 printf("1. Converting source code into machine code\n");
 printf("2. Identifying and fixing errors in a program\n");
 printf("3. Writing comments in the code\n");
 scanf("%d", &answer);
 if (answer == 2)
 {
    printf("Correct!\n\n");
    score++;
 }
 else
 {
    printf("Incorrect.\n\n");
 }

 printf("D. Which statement best describes a variable?\n");
 printf("1. A fixed instruction that cannot be changed\n");
 printf("2. A named storage location that can hold different values\n");
 printf("3. A type of loop that repeats until a condition is met\n");
 scanf("%d", &answer);
 if (answer == 2)
 {
    printf("Correct!\n\n");
    score++;
 }
 else
 {
    printf("Incorrect.\n\n");
 }

 printf("E. A function calls itself repeatedly to solve smaller versions\n of a program. What is this called?\n");
    printf("1. lteration only\n");
    printf("2. compilation\n");
    printf("3. Recursion\n");
    scanf("%d", &answer);
    if (answer == 3)
    {
        printf("Correct!\n\n");
        score++;
    }
    else
    {
        printf("Incorrect.\n\n");
    }
}
else if (subject == 3)
{
    printf("========ENGLISH QUIZ========\n\n");

    printf("A. Neither the students nor the teacher ----- aware of the schedule change\n");
    printf("1. is\n");
    printf("2. was\n"); 
    printf("3. were\n");
    scanf("%d", &answer);
    if (answer == 2)
    {
        printf("Correct!\n\n");
        score++;
    }
    else
    {
        printf("Incorrect.\n\n");
    }

    printf("B. Which sentence contains a misplaced modifier?\n");
    printf("1. Walking to class, Sara found a wallet.\n");
    printf("2. The teacher explained the lesson clearly.\n");
    printf("3. She almost drove her children to school every day.\n");
    scanf("%d", &answer);
    if (answer == 3)
    {
        printf("Correct!\n\n");
        score++;
    }
    else
    {
        printf("Incorrect.\n\n");
    }

    printf("C. Which option is a prepositional phrase?\n");
    printf("1. under the old bridge\n");
    printf("2. because she was late\n");
    printf("3. the birds were singing\n");
    scanf("%d", &answer);
    if (answer == 1)
    {
        printf("Correct!\n\n");
        score++;
    }
    else
    {
        printf("Incorrect.\n\n");
    }

    printf("D. Identify the dependent clause in the sentence:\nAlthough it was raining, we countinued the match\n");
    printf("1. it was raining, we\n");
    printf("2. Although it was raining\n");
    printf("3. we continued the match\n");
    scanf("%d", &answer);
    if (answer == 2)
    {
        printf("Correct!\n\n");
        score++;
    }
    else
    {
        printf("Incorrect.\n\n");
    }

    printf("E. Choose the sentence with correct subject-verb agreement:\n");
    printf("1. Everyone in the room is ready.\n");
    printf("2. Each of the players have a uniform.\n");
    printf("3. The dogs in the garden barks loudly.\n");
    scanf("%d", &answer);
    if (answer == 1)
    {
        printf("Correct!\n\n");
        score++;
    }
    else
    {
        printf("Incorrect.\n\n");
    }
}
else 
{
    printf("Invalid subject choice. Please restart the program\n and choose a valid subject.\n");
}

    return 0;
}