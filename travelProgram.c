#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// read the readme.md file for more information about project

// a C project on Travel and Tourism Management By Santosh(Rustam) Shrestha
// Roll no: 28
// defining structure
// contains all our data
typedef struct
{
    char name[30];
    char phone[10];
    int id;
    int place;
    char password[10];
    // declared traveller as repository to stroe data of tavellers element
} Traveller;

// function 1
//  creating delay manually giving giant calcuation to the device
//  approximately 7 second in a function on my device
// might be different in other device
void wait7s(int x)
{
    // randomly giving CPU some bank task to let
    // CPU have time to finish
    int i, j, repeat = 1000000;
    for (i = 0; i < x; i++)
    {
        for (j = 0; j < repeat; j++)
        {
            printf("");
        }
    }
}

// function 2
//  if we choose 1 then set it to Rara Lake
//  separate  function to calculate what place traceller want to visit
//   this shows place adjacent to number
void placefinder(int x)
{ // showing palces adjacent ot number
    if (x == 1)
    {
        printf("\t\tRara_Lake");
    }
    else if (x == 2)
    {
        printf("\t\tDorpatan_WLR");
    }
    else if (x == 3)
    {
        printf("\t\tChitwan_NP");
    }
    else if (x == 4)
    {
        printf("\t\tAnnapurna_Base_Camp");
    }
    else
    {
        printf("\t\tinvalid");
    }
}

// function 3
//  our Travel software with multi fucion features
//  this displays all the functionality with corresponding numbers
void displayOperation()
{
    // these are commands user can give
    // to execute for them
    printf("\t\t############################\n\n\n");
    printf("\t\t\t\t\t\t (Happy Travellers)^_^(Happy us)\n");
    printf("\t\tRustam Travel and Tourism Project\n");
    printf("\t\tcall us at 9861473532\n\n");
    printf("\t\tChoose any number below for ajdacent operations to perofrm\n\n");
    printf("\t\t1. Book a trip\n");
    printf("\t\t2. Search your detail\n");
    printf("\t\t3. Edit your Detail\n");
    printf("\t\t4. Exit the sotfware\n");

    printf("\t\t\n");
    printf("\t\t###########################\n\n\n");
}

// function 4
//  this function displays all the destination traveller can visit to
void displayDest()
{
    // this clears any previous outputs
    system("cls");
    // showing users our menu to visit
    printf("\t\t############################\n\n\n");
    printf("\t\t\t\t\t\t (Happy Travellers)^_^(Happy us)\n");
    printf("\t\tRustam Travel and Tourism Project\n");
    printf("\t\tcall us at 9861473532\n\n");
    printf("\t\tHere are the place we offer you to visit:\n");
    printf("\t\tpress adjacent number to book a trip to\n\n");
    printf("\t\t1. Rara Lake Mugu\n");
    printf("\t\t2. Dorpatan WLR\n");
    printf("\t\t3. Chitwan National Park\n");
    printf("\t\t3. Annapurna Base Camp\n");
    printf("\t\t############################\n\n\n");
}

// function 5
// this function nooks the trip in struct
// also nunOfTravelles that contains ho much items contain by struct
// and this function registers user in our databse
void registerUser(Traveller travellers[], int numOfTravellers)
{
    int key;
    // decalaring size of struct array

    // i for iteration
    // destination stores place equivalent entered by user
    int i, destination;
    // insert data in each part
    for (i = 0; i < numOfTravellers; i++)
    {

        // assigning indes starting from 1+1 as ID
        // basically iteration +1 as id
        travellers[i].id = i + 1;
        // all the prompts for user
        printf("\t\t############################\n\n\n");
        printf("\t\twhich place to visit for id %d: \n", i + 1);
        scanf("%d", &travellers[i].place);
        printf("\t\tNo. %d traveller name: \n", travellers[i].id);
        scanf("%s", travellers[i].name);
        printf("\t\tNo. %d traveller phone number: \n", travellers[i].id);
        scanf("%s", travellers[i].phone);
        printf("\t\tMake a Password for No. %d: \n", travellers[i].id);
        scanf("%s", travellers[i].password);
        printf("\t\tYour data is Submitted Mr. %s\n", travellers[i].name);
        printf("\t\t############################\n\n\n");
    }
    printf("\t\t\n printing data given\n");
    // reseting iterating value for next loop
    i = 0;
    // this basically displays the registration form type thing
    // to enter details of multiple users
    while (i < numOfTravellers)
    {
        printf("\t\t---------------\n\n\n");
        printf("\t\tname: %s\n", travellers[i].name);
        printf("\t\tnumber: %s\n", travellers[i].phone);
        printf("\t\tID: %d\n", travellers[i].id);
        printf("\t\tplace:");
        placefinder(travellers[i].place);
        printf("\t\t\n\n");
        printf("\t\t---------------\n\n\n");

        i++;
    }
}

// function 6
//  the find function finds our details and shows us except sensitive
//   information like Passwords
int find(Traveller travellers[], int numOfTravellers)
{
    int key, i;
    printf("\t\t############################\n\n\n");
    printf("\t\tenter your ID: ");
    scanf("%d", &key);
    // iterating through list of struct array
    for (i = 0; i < numOfTravellers; i++)
    {
        // if and only if user data is equal to key
        if (key == travellers[i].id)
        {
            printf("\t\tname: %s\n", travellers[i].name);
            printf("\t\tnumber: %s\n", travellers[i].phone);
            printf("\t\tID: %d\n", travellers[i].id);
        }
    }
    printf("\t\t############################\n\n\n");
}

// Alert !! this edit details is faulty code part to be debugged
// this function finds details and matches password finally letting us
//  edit our details after verification
int editDetails(Traveller travellers[], int numOfTravellers)
{

    int key, i, x;
    char passkey[10];
    printf("\t\tEnter your ID: ");
    scanf("%d", &key);
    printf("\t\tEnter your Password: ");
    scanf("%s", passkey);
    // somewhere here loop is not working
    //  please do check Deepak Sir
    //???????????????????????????
    //???????problem?????????????
    //???????problem?????????????
    //???????????????????????????
    for (i = 0; i < numOfTravellers; i++)
    {
        // if user enters password that is not correct for 3 times
        // block their account
        while (i < 4)
        {
            // checking id and password matches or not
            if ((key == travellers[i].id) && (strcmp(travellers[i].password, passkey) == 0))
            {
                printf("\t\t\nUpdate name: ");
                scanf("%s", travellers[i].name);
                printf("\t\t\nUpdate phone number: ");
                scanf("%s", travellers[i].phone);
                printf("\t\t\nUpdate destination: ");
                scanf("%d", &travellers[i].place);
            }
            else
            {
                printf("\t\t%d tries left", 3 - x);
                if (x == 3)
                {

                    printf("\t\t\nSorry to say but you are stranded.");
                    printf("\t\t\nPlease don't bother trying.");
                    printf("wait for some seconds");
                    wait7s(2000);
                }
            }
            // this is is incrementation of while loop and everytime loop iterates this increases

            i++;
        }
    }
}
// ended section of faulty code

// actual interface function
int main()
{
    // variable that gets value from user for what function to execute
    int input;
    int key;
    // internal definition of struct
    Traveller travellers[26];
    int numOfTravellers;
// jump lable to jump to the starting of program to give user choice what to do again
again:
    system("cls");
    displayOperation();
    scanf("%d", &input);
    if (input == 1)
    {
        system("cls");
        printf("\t\thow many travellers? : \n");
        scanf("%d", &numOfTravellers);
        displayDest();
        registerUser(travellers, numOfTravellers);
        printf("wait for some seconds");
        wait7s(2000);
        goto again;
    }
    else if (input == 2)
    {
        find(travellers, numOfTravellers);
        printf("wait for some seconds");
        wait7s(2000);
        goto again;
    }
    else if (input == 3)
    {
        editDetails(travellers, numOfTravellers);
        goto again;
    }
    else if (input == 4)
    {
        system("cls");
    }
    else
    {
        return 0;
    }
    return 0;
}
