class student
{
    private:
        int rollno;
        float fees;
    public:
        student(int a, float m)
        {
            rollno =a;
            fees = m;
        }
        operator int()
        {
            return(rollno);
        }
        operator float()
        {
            return(fees);
        }
};
void main(){
    int j;
    float f;
    student st(5 , 4200.50);
    j=st;
    f=st;

    cout<<"\nvalue of j:"<<j<<"\n";
    cout<<"\nvalue of f:"<<f<<"\n";
}