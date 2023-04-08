class StudentList
{
public:
    StudentList();		// starts out empty
    ~StudentList();		// cleanup (destructor)

    bool ImportFile(const char* filename);
    bool CreateReportFile(const char* filename);
    void ShowList() const;	// print basic list data

protected:
    char fName[21];
    char lName[21];
    char course;
};
class ComputerScience: public StudentList
{
public:
    ComputerScience();
    ~ComputerScience();
private:
    int finalExam;
    int test1;
    int test2;
    double programA;
};
class Theatre: public StudentList
{
public:
    Theatre();
    ~Theatre();
private:
    int participation;
    int midTerm;
    int finalExam;
};
class Biology: public StudentList
{
public:
    Biology();
    ~Biology();
private:
    int labGrade;
    in

};
