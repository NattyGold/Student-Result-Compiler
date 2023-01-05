#include <iostream>
#include <conio.h>
#include <iomanip>
#include <stdlib.h>

using namespace std;

//Function prototype

void welcome();
void menu();
void studentView();
void adminView();
string displayGrade(int score);
int checkGradePoint(string grade);
void inputScores();
void generateResult();
void checkList(double gpa);
void drawLine(int n, char symbol);

int main()
{
    welcome();
    getch();
    system("cls");
    menu();
}

//Global Variables
int csc2301, csc2303, csc2305, csc2207, csc2309, mth2301, mth2205, gst2201, gst2203, level;
string  username, password, name, fname, lname,matNo;
int csc2301Gp, csc2303Gp, csc2305Gp, csc2207Gp, csc2309Gp, mth2301Gp, mth2205Gp, gst2201Gp, gst2203Gp;

void menu(){
    int ch2;
    drawLine(70,'_');
    cout<<"\n\n\t\tFEDERAL UNIVERSITY OF KASHERE"<<endl;
    cout<<"\n\n\n\tENTRY MENU - LOGIN";
    cout<<"\n\n\t1.ADMIN";
    cout<<"\n\n\t2.STUDENT";
    cout<<"\n\n\t3.EXIT\n";

    drawLine(70,'_');

    cout<<"\n\n\tPlease Enter Your Choice (1-3) ";
    cin>>ch2;

    switch(ch2){
        case 1:
            system("cls");
            adminView();
        break;
        case 2:
            system("cls");
            studentView();
        break;
        case 3:
            cout<<"\n\n\t\tTHANK YOU FOR USING THIS SOFTWARE...."<<endl;
            break;
        default:
            cout<<"Invalid Key"<<endl;
            menu();
        break;
    }
}

void adminView(){
    drawLine(70, '_');
    cout<<"\n\n\t\tFEDERAL UNIVERSITY OF KASHERE"<<endl;
    cout<<"\n\n\t\tSTUDENT RESULT COMPILER"<<endl;
    cout<<"\n\n\t\t\tADMIN VIEW"<<endl;

    drawLine(70, '_');
    cout << "\n\tUsername:\t";
    cin >> username;

    cout << "\n\tPassword:\t";
    cin >> password;

    if (username == "admin" && password == "1234")
    {
        cout << "\n\tLogin Success!" << endl;
        getch();
        system("cls");
        inputScores();

        int menuCh;
        cout<<"\n\tPress 1 to Go to Menu "<<endl;

        cin>>menuCh;

        if(menuCh == 1){
            system("cls");
            menu();
        }

        else{
            cout<<"\n\tInvalid key"<<endl;
        }
    }
    else
    {
        cout << "Incorrect username or password" << endl;
        adminView();
    }
}

void studentView(){

    drawLine(70, '_');
    cout<<"\n\n\t\tFEDERAL UNIVERSITY OF KASHERE"<<endl;
    cout<<"\n\n\t\tSTUDENT RESULT COMPILIER"<<endl;
    cout<<"\n\n\t\t\tSTUDENT VIEW"<<endl;
    drawLine(70, '_');

    cout << "\n\tUsername:\t";
    cin >> username;

    cout << "\n\tPassword:\t";
    cin >> password;


    if (username == "student" && password == "1234")
    {
        cout << "\n\n\tLogin Success!" << endl;
        getch();
        system("cls");
    }

    else
    {
        cout << "\n\n\tIncorrect username or password" << endl;
        studentView();
    }
    
    string regNo;
    cout<<"\n\n\tCHECK YOUR RESULT BY PROVIDING YOUR MATRIC NO: ";
    cin>>regNo;

    if(regNo == matNo){
        generateResult();
        //  getch();
        //  system("cls");
        menu();
    }
    else{
        cout<<"\n\tStudent Record not found! "<<endl;
        //  getch();
         // system("cls");
        menu();
        }
}

void welcome()
{
    drawLine(70, '_');
    cout << "\n\n\tWELCOME TO FUK STUDENT RESULT COMPILIER\n"<< endl;
    drawLine(70, '_');
}

string displayGrade(int score)
{
    if (score > 100){
    return "Invalid";
    }
    
    else if (score >= 70 && score <= 100){
    return "A";
    }

    else if (score >= 60 && score <= 69){
    return "B";
    }

    else if (score >= 50 && score <= 59){
    return "C";
    }

    else if (score >= 45 && score <= 49){
    return "D";
    }

    else if (score >= 40 && score <= 44){
    return "E";
    }

    else {
    return "F";
    }

}

//Function Declaration to check grade and display grade point

int checkGradePoint(string grade)
{
    int gp = 0;
    if (grade == "A")
    {
        gp += 5;
        return gp;
    }

    else if (grade == "B")
    {
        gp += 4;
        return gp;
    }

    else if (grade == "C")
    {
        gp += 3;
        return gp;
    }

    else if (grade == "D")
    {
        gp += 2;
        return gp;
    }

    else if (grade == "E")
    {
        gp += 1;
        return gp;
    }

    else
    {
        gp += 0;
        return gp;
    }

}

//Function Declaration to checklist

void checkList(double gpa)
{
    if (gpa >= 4.50 && gpa <= 5.0)
    {
        cout << "VC'S LIST";
    }

    else if (gpa >= 4.0 && gpa <= 4.49)
    {
        cout << "DEAN'S  LIST";
    }
}


void inputScores()
{
    drawLine(70, '_');
    cout<<"\n\n\t\tSTUDENT DASHBOARD" << endl;
    drawLine(70, '_');

    cout<<"\tSTUDENT NAME\t: ";
    cin>>fname>>lname;

    cout << "\n\tMATRIC NO\t: ";
    cin>>matNo;

    cout << "\n\tLEVEL\t\t: ";
    cin >> level;

    drawLine(70, '_');

    cout << "\n\tENTER TOTAL SCORES(100%)" << endl;
    drawLine(50, '_');

    cout << "\n\n\tCSC 2301\t|\t";
    cin >> csc2301;

    cout << "\n\tCSC 2303\t|\t";
    cin >> csc2303;

    cout << "\n\tCSC 2305\t|\t";
    cin >> csc2305;

    cout << "\n\tCSC 2207\t|\t";
    cin >> csc2207;

    cout << "\n\tCSC 2309\t|\t";
    cin >> csc2309;

    cout << "\n\tMTH 2301\t|\t";
    cin >> mth2301;

    cout << "\n\tMTH 2205\t|\t";
    cin >> mth2205;

    cout << "\n\tGST 2201\t|\t";
    cin >> gst2201;

    cout << "\n\tGST 2203\t|\t";
    cin >> gst2203;

    cout << "\n\t\tPRINT | Result"<< endl;
}

void generateResult()
{
    name = fname +' '+lname;

    cout << "\n\tFEDERAL UNIVERSITY OF KASHERE" << endl;
    cout << "\t\tFACULTY OF SCIENCE" << endl;
    cout << "\tDEPARTMENT OF COMPUTER SCIENCE" << endl;
    cout << "\t\tFIRST SEMESTER\n\t2018/2019 ACADEMIC SESSION" << endl;
    cout << "\tSTUDENT RESULT TRANSCRIPT" << endl;
    
    cout << "\n\tSTUDENT NAME:\t"<<name<<endl;
    cout << "\n\tLEVEL:\t\t" << level << endl;
    cout << "\n\tMATRIC NO:\t" << matNo << endl;
    cout << "\n\tCOURSE\t\t\tGRADE" << endl;

    drawLine(50, '_');

    cout << "\n\tCSC 2301\t|\t" << displayGrade(csc2301) << endl;
    cout << "\n\tCSC 2303\t|\t" << displayGrade(csc2303) << endl;
    cout << "\n\tCSC 2305\t|\t" << displayGrade(csc2305) << endl;
    cout << "\n\tCSC 2207\t|\t" << displayGrade(csc2207) << endl;
    cout << "\n\tCSC 2309\t|\t" << displayGrade(csc2309) << endl;
    cout << "\n\tMTH 2301\t|\t" << displayGrade(mth2301) << endl;
    cout << "\n\tMTH 2205\t|\t" << displayGrade(mth2205) << endl;
    cout << "\n\tGST 2201\t|\t" << displayGrade(gst2201) << endl;
    cout << "\n\tGST 2203\t|\t" << displayGrade(gst2203) << endl;

    drawLine(50, '_');

    //Variable Declaration for course  grade point

    int csc2301Gp = checkGradePoint(displayGrade(csc2301));
    int csc2303Gp = checkGradePoint(displayGrade(csc2303));
    int csc2305Gp = checkGradePoint(displayGrade(csc2305));
    int csc2207Gp = checkGradePoint(displayGrade(csc2207));
    int csc2309Gp = checkGradePoint(displayGrade(csc2309));
    int gst2201Gp = checkGradePoint(displayGrade(gst2201));
    int gst2203Gp = checkGradePoint(displayGrade(gst2203));
    int mth2301Gp = checkGradePoint(displayGrade(mth2301));
    int mth2205Gp = checkGradePoint(displayGrade(mth2205));

    //Total Registered Credit Unit
    int csc2301Unit = 3;
    int csc2303Unit = 3;
    int csc2305Unit = 3;
    int csc2207Unit = 2;
    int csc2309Unit = 3;
    int gst2201Unit = 2;
    int gst2203Unit = 2;
    int mth2301Unit = 3;
    int mth2205Unit = 2;

    double rcu = csc2301Unit + csc2303Unit + csc2305Unit + csc2207Unit + csc2309Unit + gst2201Unit + gst2203Unit + mth2301Unit + mth2205Unit;

    double tcue = (csc2301Unit * csc2301Gp) + (csc2303Unit * csc2303Gp) + (csc2305Unit * csc2305Gp) + (csc2207Unit * csc2207Gp) + (csc2309Unit * csc2309Gp) + (gst2201Unit * gst2201Gp) + (gst2203Unit * gst2203Gp) + (mth2301Unit * mth2301Gp) + (mth2205Unit * mth2205Gp);

    double gpa = tcue / rcu;

    cout << "\n\tRegistered Credit Unit " << rcu << endl;
    cout << "\tTotal Credit Unit Earned (TCUE): " << tcue << endl;
    cout << "\tGrade Point Average(GPA): " << setprecision(3) << gpa << endl;
    cout << "\n\tREMARK: ";

    checkList(gpa);

    string displayCO[9]; //An array that store courses that are  carry over

    //A condition to check for carry over in any course
    if ((csc2301Gp == 0) || (csc2303Gp == 0) || (csc2305Gp == 0) || (csc2207Gp == 0) || (csc2309Gp == 0) || (gst2201Gp == 0) || (gst2203Gp == 0) || (mth2301Gp == 0) || (mth2205Gp == 0))

    {
        cout << "  CO: ";

        if (csc2301Gp == 0)
        {
            displayCO[0] = "CSC 2301";
        }

        if (csc2303Gp == 0)
        {
            displayCO[1] = "CSC 2303";
        }

        if (csc2305Gp == 0)
        {
            displayCO[2] = "CSC 2305";
        }

        if (csc2207Gp == 0)
        {
            displayCO[3] = "CSC 2207";
        }
        if (csc2309Gp == 0)
        {
            displayCO[4] = "CSC 2309";
        }
        if (gst2201Gp == 0)
        {
            displayCO[5] = "GST 2201";
        }
        if (gst2203Gp == 0)
        {            displayCO[6] = "GST 2203";

        }
        if (mth2301Gp == 0)
        {
            displayCO[7] = "MTH 2301";
        }
        if (mth2205Gp == 0)
        {
            displayCO[8] = "MTH 2205";
        }
    }
    else 
    {
        cout << "\tPASSED "<<endl;
    }

    for (int i = 0; i < 9; i++)
    {
        cout << displayCO[i] << " ";
    }

    cout<<endl;
}
void drawLine(int n, char symbol)
{
    for (int i = 0; i < n; i++)
    {
        cout << symbol;
    }
    cout<<endl;
}