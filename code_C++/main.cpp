#include"headers.h"


using namespace std;
int main()
{
    system("color F0");
    Point P;
    ofstream fout;
    string path = "C:\\Users\\HP\\Desktop\\output.txt";
    fout.open(path,ios::app);
    double test , sim , Answer;
    int i ;
    int a ;
    SYSTEMTIME time;
    GetLocalTime(&time);//local time
    //GetSystemTime(&ct);//GMT time
    fout << "\n\t����������������ʹ��ʱ��Ϊ��"
         << time.wYear << "��"
         << setfill('0') << setw(2)<< time.wMonth << "��"
         << setfill('0') << setw(2)<< time.wDay << "��  "
         << setfill('0') << setw(2) << time.wHour << "ʱ"
         << setfill('0') << setw(2) << time.wMinute << "��"
         << setfill('0') << setw(2) << time.wSecond << "�롪��������������\n\n" ;
    int flag_letter = 0 ,flag_point;
    char push;
    bool check1 = true , check2 = true ;
    string option , orifunc;
    string   m , n ,m1 ,n1  ;
    double trim , trin , trim1 , trin1  ;
     cout << "\n\n\n"
         << "                  ------------------------------------------------------------------------\n"
         << "                  |                                                                      |\n"
         << "                  |                             �����ּ����                             |\n"
         << "                  |                                                                      |\n"
         << "                  |    --------------------------------------------------------------    |\n"
         << "                  |                                                                      |\n"
         << "                  |                       ��ϲ�㷢����һ�����س���                     |\n"
         << "                  |                                                                      |\n"
         << "                  |                       ����Ϊ��ⶨ���ֶ�������                     |\n"
         << "                  |                                                                      |\n"
         << "                  |                �Ӵ˲����ǳ�����򽫴��㳩�λ��ֵĺ���            |\n"
         << "                  |                                                                      |\n"
         << "                  |                     �������������ʼ��Ļ���֮�ã�                   |\n"
         << "                  |                                                                      |\n"
         << "                  ------------------------------------------------------------------------\n\n";
         getch();
         system("cls");
    while( check1 ){
        check2 = true;
        GetLocalTime(&time);
    cout << "\n\n\n"
         << "                  ------------------------------------------------------------------------\n"
         << "                  |                                                                      |\n"
         << "                  |                       "<< time.wYear << "��" << setfill('0') << setw(2)<< time.wMonth << "��" << setfill('0') << setw(2)<< time.wDay << "��  "<< setfill('0') << setw(2) << time.wHour << "ʱ" << setfill('0') << setw(2)<< time.wMinute << "��                       |\n"
         << "                  |                                                                      |\n"
         << "                  |    --------------------------------------------------------------    |\n"
         << "                  |                                                                      |\n"
         << "                  |                       ��ӭʹ�ö����ּ������                         |\n"
         << "                  |                                                                      |\n"
         << "                  |                      ��ѡ������ʵ�ֵĹ��ܣ�                          |\n"
         << "                  |                                                                      |\n"
         << "                  |                        1.����һԪ����������                          |\n"
         << "                  |                        2.�����Ԫ����������                          |\n"
         << "                  |                        3.�˳�ϵͳ                                    |\n"
         << "                  |                                                                      |\n"
         << "                  ------------------------------------------------------------------------\n\n"
         << "                                         ���ڴ�������Ž���ѡ��";
    option.clear();
    cin >> push ;
    option.push_back(push);
    system("cls");
    //һԪ�����֣�
    if( option[0] == '1'){
        while( check2 ){
            GetLocalTime(&time);
            cout << "\n\n\n                                          "<< time.wYear << "��" << setfill('0') << setw(2)<< time.wMonth << "��" << setfill('0') << setw(2)<< time.wDay << "��  "<< setfill('0') << setw(2) << time.wHour << "ʱ" << setfill('0') << setw(2) << time.wMinute << "��\n\n"
                 << "                  ------------------------------------------------------------------------\n"
                 << "                  |                                                                      |\n"
                 << "                  |                      ����������£��밴�������룡                    |\n"
                 << "                  |                                                                      |\n"
                 << "                  |        1.ֻ��ʵ��+��-��*��/��^��()��[]��{}��||��log(,)��sin()��      |\n"
                 << "                  |                  cos()��tan()��asin()��acos()��atan()������          |\n"
                 << "                  |        2.log(,)����ʹ�ù���Ϊ��log(����,����)                        |\n"
                 << "                  |        3.ͬ�����š�����ֵ�Ų���Ƕ�ף����ű���ɶԳ���                |\n"
                 << "                  |        4.���з��ű�����Ӣ������                                      |\n"
                 << "                  |        5.һԪ��������x��ʾ�Ա�������Ԫ��������x��y��ʾ�Ա���         |\n"
                 << "                  |        6.���ܼ����������                                            |\n"
                 << "                  |                                                                      |\n"
                 << "                  ------------------------------------------------------------------------\n\n"
                 << "                           ���ڴ�����һԪ������";
            orifunc.clear();
            cin >> orifunc;
            fout << "\t\t������һԪ���������֡�\n\n"
                 << "\t\t�������ʽ��" << orifunc <<"\n";
            flag_letter = 0 ;
            for( i = 0 ; i < orifunc.size() ; i ++ ){
                if ( orifunc[i] == 'y' )
                    flag_letter ++ ;
            }
            //��һԪʱ���������Ԫ��
            if ( flag_letter != 0 ){
                system("cls");
                GetLocalTime(&time);
                cout << "\n\n\n                                          "<< time.wYear << "��" << setfill('0') << setw(2)<< time.wMonth << "��" << setfill('0') << setw(2)<< time.wDay << "��  "<< setfill('0') << setw(2) << time.wHour << "ʱ" << setfill('0') << setw(2) << time.wMinute << "��\n\n"
                     << "                  ------------------------------------------------------------------------\n"
                     << "                  |                                                                      |\n"
                     << "                  |                                Warning!                              |\n"
                     << "                  |                                                                      |\n"
                     << "                  |                      ����һԪ�����������˶�Ԫ������                  |\n"
                     << "                  |                                                                      |\n"
                     << "                  |                       1.��������һԪ����                             |\n"
                     << "                  |                       2.�ص���ҳ����ѡ���Ԫ����                     |\n"
                     << "                  |                       3.�˳�ϵͳ                                     |\n"
                     << "                  |                                                                      |\n"
                     << "                  |                                                                      |\n"
                     << "                  ------------------------------------------------------------------------\n\n"
                     << "                                         ���ڴ�������Ž���ѡ��";
                fout << "\n\t\t����һԪ�����������˶�Ԫ������\n\n"
                     << "\t\t\t�������������������������������������\n\n";
                cin >> push ;
                while( option.size()>1 )
                    option.pop_back();
                option.push_back(push);
                flag_letter = 0;
                if( option[1] == '1' );
                else if( option[1] == '2' )
                    check2 = false;
                else if( option[1] == '3' ){
                    check1 = false;
                    check2 = false;
                }
                system("cls");
            }
            //��ȷ����һԪ������
            else if( flag_letter == 0){
                cout << "\n                           ������������ޣ�";
                cin >> m ;
                cout << "\n                           ������������ޣ�";
                cin >> n ;
                fout << "\t\t�������ޣ�" << m << "\n"
                     << "\t\t�������ޣ�" << n << "\n";
                trim = solve( m , 1 );
                trin = solve( n , 1 );
                flag_point = P.point ( orifunc , trim , trin );
                //�����һԪ������覵㣺
                if( flag_point == 0 ){
                    GetLocalTime(&time);
                    system("cls");
                    cout << "\n\n\n                                          "<< time.wYear << "��" << time.wMonth << setfill('0') << setw(2)<< "��" << setfill('0') << setw(2)<< time.wDay << "��  "<< setfill('0') << setw(2) << time.wHour << "ʱ" << setfill('0') << setw(2) << time.wMinute << "��\n\n"
                         << "                  ------------------------------------------------------------------------\n\n"
                         << "                                �������ʽΪ��" << orifunc << endl
                         << "                                ��������Ϊ��  " << m << endl
                         << "                                ��������Ϊ��  " << n << endl
                         << "                                ����������Ϊ��һԪ��������                                \n\n";
                    fout << "\t\t\t����������Ϊ��һԪ��������\n\n";
                    cout << "                  ------------------------------------------------------------------------\n"
                         << "                  |                                                                      |\n"
                         << "                  |                    ��ѡ������ʵ�ֵ��㷨��                            |\n"
                         << "                  |                                                                      |\n"
                         << "                  |                      1.���巨                                        |\n"
                         << "                  |                      2.���η�                                        |\n"
                         << "                  |                      3.����ɭ�㷨                                    |\n"
                         << "                  |                      4.���ؿ���Ͷ�㷨                                |\n"
                         << "                  |                      5.���ؿ���ƽ��ֵ��                              |\n"
                         << "                  |                      6.�˳�ϵͳ                                      |\n"
                         << "                  |                                                                      |\n"
                         << "                  ------------------------------------------------------------------------\n\n"
                         << "                                     ���ڴ�������Ž���ѡ��";
                    cin >> push ;
                    while( option.size()>1 )
                         option.pop_back();
                    option.push_back(push);
                    system("cls");
                    //ѡ��1.���巨���һԪ��������
                    if( option[1] == '1'){
                        GetLocalTime(&time);
                        cout << "\n\n\n                                          "<< time.wYear << "��" << setfill('0') << setw(2)<< time.wMonth << "��" << setfill('0') << setw(2)<< time.wDay << "��  "<< setfill('0') << setw(2) << time.wHour << "ʱ" << setfill('0') << setw(2) << time.wMinute << "��\n\n"
                             << "                  ------------------------------------------------------------------------\n\n"
                             << "                                �������ʽΪ��" << orifunc << endl
                             << "                                ��������Ϊ��  " << m << endl
                             << "                                ��������Ϊ��  " << n << endl
                             << "                                ����������Ϊ��һԪ��������                                \n\n";
                        Answer = Definition( orifunc , trim , trin);
                        cout << "                                ͨ�����巨��û���ֵΪ��" << Answer;
                        fout << "\t\t\t�ö��巨���һԪ����ֵΪ��" << Answer <<"\n\n"
                             << "\t\t\t�������������������������������������\n\n";
                        cout << "\n\n"
                             << "                  ------------------------------------------------------------------------\n"
                             << "                  |                                                                      |\n"
                             << "                  |                        ��ѡ��������еĲ�����                        |\n"
                             << "                  |                                                                      |\n"
                             << "                  |                          1.�ص���ҳ                                  |\n"
                             << "                  |                          2.�˳�ϵͳ                                  |\n"
                             << "                  |                                                                      |\n"
                             << "                  ------------------------------------------------------------------------\n\n"
                             << "                                          ���ڴ�������Ž���ѡ��";
                        cin >> push ;
                        while( option.size()>2 )
                          option.pop_back();
                        option.push_back(push);
                        if( option[2] == '1'){
                            check2 = false;
                            system("cls");
                        }
                        else if ( option[2] == '2' ){
                            check1 = false;
                            check2 = false;
                            system("cls");
                        }
                    }
                    //ѡ��2.���η����
                    else if( option[1] == '2'){
                        GetLocalTime(&time);
                        cout << "\n\n\n                                          "<< time.wYear << "��" << time.wMonth << setfill('0') << setw(2)<< "��" << time.wDay << setfill('0') << setw(2)<< "��  "<< setfill('0') << setw(2) << time.wHour << "ʱ" << setfill('0') << setw(2) << time.wMinute << "��\n\n"
                             << "                  ------------------------------------------------------------------------\n\n"
                             << "                                �������ʽΪ��" << orifunc << endl
                             << "                                ��������Ϊ��  " << m << endl
                             << "                                ��������Ϊ��  " << n << endl
                             << "                                ����������Ϊ��һԪ��������                                \n\n";
                        Answer = Trapezoid( orifunc , trim , trin);
                        cout << "                                ͨ�����η���û���ֵΪ��" << Answer;
                        fout << "\t\t\t�����η����һԪ����ֵΪ��" << Answer <<"\n\n"
                             << "\t\t\t�������������������������������������\n\n";
                        cout << "\n\n"
                             << "                  ------------------------------------------------------------------------\n"
                             << "                  |                                                                      |\n"
                             << "                  |                        ��ѡ��������еĲ�����                        |\n"
                             << "                  |                                                                      |\n"
                             << "                  |                          1.�ص���ҳ                                  |\n"
                             << "                  |                          2.�˳�ϵͳ                                  |\n"
                             << "                  |                                                                      |\n"
                             << "                  ------------------------------------------------------------------------\n\n"
                             << "                                          ���ڴ�������Ž���ѡ��";
                        cin >> push;
                        while( option.size()>2 )
                          option.pop_back();
                        option.push_back(push);
                        if( option[2] == '1'){
                            check2 = false;
                            system("cls");
                        }
                        else if ( option[2] == '2' ){
                            check1 = false;
                            check2 = false;
                            system("cls");
                        }
                    }
                    //ѡ��3.����ɭ�㷨���
                    else if( option[1] == '3'){
                        GetLocalTime(&time);
                        cout << "\n\n\n                                          "<< time.wYear << "��" << time.wMonth << setfill('0') << setw(2)<< "��" << setfill('0') << setw(2)<< time.wDay << "��  "<< setfill('0') << setw(2) << time.wHour << "ʱ" << setfill('0') << setw(2) << time.wMinute << "��\n\n"
                             << "                  ------------------------------------------------------------------------\n\n"
                             << "                                �������ʽΪ��" << orifunc << endl
                             << "                                ��������Ϊ��  " << m << endl
                             << "                                ��������Ϊ��  " << n << endl
                             << "                                ����������Ϊ��һԪ��������                                \n\n";

                        Answer = Simpson( orifunc , trim , trin);
                        cout << "                                ͨ������ɭ�㷨��û���ֵΪ��" << Answer;
                        fout << "\t\t\t������ɭ�㷨���һԪ����ֵΪ��" << Answer <<"\n\n"
                             << "\t\t\t�������������������������������������\n\n";
                        fout << "\t\t\t�������������������������������������\n\n";
                        cout << "\n\n"
                             << "                  ------------------------------------------------------------------------\n"
                             << "                  |                                                                      |\n"
                             << "                  |                        ��ѡ��������еĲ�����                        |\n"
                             << "                  |                                                                      |\n"
                             << "                  |                          1.�ص���ҳ                                  |\n"
                             << "                  |                          2.�˳�ϵͳ                                  |\n"
                             << "                  |                                                                      |\n"
                             << "                  ------------------------------------------------------------------------\n\n"
                             << "                                          ���ڴ�������Ž���ѡ��";
                       cin >> push;
                        while( option.size()>2 )
                          option.pop_back();
                        option.push_back(push);
                        if( option[2] == '1'){
                            check2 = false;
                            system("cls");
                        }
                        else if ( option[2] == '2' ){
                            check1 = false;
                            check2 = false;
                            system("cls");
                        }
                    }
                    //ѡ��4.���ؿ���Ͷ�㷨
                    else if( option[1] == '4'){
                        GetLocalTime(&time);
                        cout << "\n\n\n                                          "<< time.wYear << "��" << time.wMonth << setfill('0') << setw(2)<< "��" << time.wDay << setfill('0') << setw(2)<< "��  "<< setfill('0') << setw(2) << time.wHour << "ʱ" << setfill('0') << setw(2) << time.wMinute << "��\n\n"
                             << "                  ------------------------------------------------------------------------\n\n"
                             << "                                �������ʽΪ��" << orifunc << endl
                             << "                                ��������Ϊ��  " << m << endl
                             << "                                ��������Ϊ��  " << n << endl
                             << "                                ����������Ϊ��һԪ��������                                \n\n";
                        Answer = Montecarlo( orifunc , trim , trin);
                        cout << "                                ͨ�����ؿ���Ͷ�㷨��û���ֵΪ��" << Answer;
                        fout << "\t\t\t�����ؿ���Ͷ�㷨���һԪ����ֵΪ��" << Answer <<"\n\n";
                        fout << "\t\t\t�������������������������������������\n\n";
                        cout << "\n\n"
                             << "                  ------------------------------------------------------------------------\n"
                             << "                  |                                                                      |\n"
                             << "                  |                        ��ѡ��������еĲ�����                        |\n"
                             << "                  |                                                                      |\n"
                             << "                  |                          1.�ص���ҳ                                  |\n"
                             << "                  |                          2.�˳�ϵͳ                                  |\n"
                             << "                  |                                                                      |\n"
                             << "                  ------------------------------------------------------------------------\n\n"
                             << "                                          ���ڴ�������Ž���ѡ��";
                        cin >> push;
                        while( option.size()>2 )
                          option.pop_back();
                        option.push_back(push);
                        if( option[2] == '1'){
                            check2 = false;
                            system("cls");
                        }
                        else if ( option[2] == '2' ){
                            check1 = false;
                            check2 = false;
                            system("cls");
                        }
                    }
                    //ѡ��5.���ؿ���ƽ��ֵ�����
                    else if( option[1] == '5'){
                        GetLocalTime(&time);
                        cout << "\n\n\n                                          "<< time.wYear << "��" << time.wMonth << setfill('0') << setw(2)<< "��" << time.wDay << setfill('0') << setw(2)<< "��  "<< setfill('0') << setw(2) << time.wHour << "ʱ" << setfill('0') << setw(2) << time.wMinute << "��\n\n"
                             << "                  ------------------------------------------------------------------------\n\n"
                             << "                                �������ʽΪ��" << orifunc << endl
                             << "                                ��������Ϊ��  " << m << endl
                             << "                                ��������Ϊ��  " << n << endl
                             << "                                ����������Ϊ��һԪ��������                                \n\n";
                        Answer = montecarlo( orifunc , trim , trin);
                        cout << "                                ͨ�����ؿ���ƽ��ֵ����û���ֵΪ��" << Answer;
                        fout << "\t\t\t�����ؿ���ƽ��ֵ�����һԪ����ֵΪ��" << Answer <<"\n\n";
                        fout << "\t\t\t�������������������������������������\n\n";
                        cout << "\n\n"
                             << "                  ------------------------------------------------------------------------\n"
                             << "                  |                                                                      |\n"
                             << "                  |                        ��ѡ��������еĲ�����                        |\n"
                             << "                  |                                                                      |\n"
                             << "                  |                          1.�ص���ҳ                                  |\n"
                             << "                  |                          2.�˳�ϵͳ                                  |\n"
                             << "                  |                                                                      |\n"
                             << "                  ------------------------------------------------------------------------\n\n"
                             << "                                          ���ڴ�������Ž���ѡ��";
                       cin >> push;
                        while( option.size()>2 )
                          option.pop_back();
                        option.push_back(push);
                        if( option[2] == '1'){
                            check2 = false;
                            system("cls");
                        }
                        else if ( option[2] == '2' ){
                            check1 = false;
                            check2 = false;
                            system("cls");
                        }
                    }
                    //6.�˳�ϵͳ
                    else if( option[1] == '6' ){
                            check1 = false;
                            check2 = false;
                            system("cls");
                        }
                }
                //һԪ覻��֣���覻��ַ�ɢ
                else if( flag_point == 1 ){
                    system("cls");
                    GetLocalTime(&time);
                    cout << "\n\n\n                                          "<< time.wYear << "��" << time.wMonth << setfill('0') << setw(2)<< "��" << time.wDay << setfill('0') << setw(2)<< "��  "<< setfill('0') << setw(2) << time.wHour << "ʱ" << setfill('0') << setw(2) << time.wMinute << "��\n\n"
                         << "                  ------------------------------------------------------------------------\n\n"
                         << "                                �������ʽΪ��" << orifunc << endl
                         << "                                ��������Ϊ��  " << m << endl
                         << "                                ��������Ϊ��  " << n << endl
                         << "                                ����������Ϊ��һԪ覻��֣���覻��ַ�ɢ������ֵΪ����\n";
                    fout << "\t\t����������Ϊ��һԪ覻��֣���覻��ַ�ɢ������ֵΪ����\n";
                    if( P.storepoint.size() == 1 ){
                        cout <<"                                覵���" << P.storepoint[0] << "����\n\n" ;
                        fout <<"\t\t覵���" << P.storepoint[0] << "����\n\n" ;
                    }
                    else if( P.storepoint.size() >= 1 ){
                        for( i = 0 ; i < P.storepoint.size() ; i ++ )
                        cout << "                                ��" << i+1 <<"��覵���" << P.storepoint[i] << "����\n" ;
                        fout << "\t\t��" << i+1 <<"��覵���" << P.storepoint[i] << "����\n" ;
                    }
                    fout << "\t\t\t�������������������������������������\n\n";
                    cout << "\n\n"
                         << "                  ------------------------------------------------------------------------\n"
                         << "                  |                                                                      |\n"
                         << "                  |                        ��ѡ��������еĲ�����                        |\n"
                         << "                  |                                                                      |\n"
                         << "                  |                          1.�ص���ҳ                                  |\n"
                         << "                  |                          2.�˳�ϵͳ                                  |\n"
                         << "                  |                                                                      |\n"
                         << "                  ------------------------------------------------------------------------\n\n"
                         << "                                          ���ڴ�������Ž���ѡ��";
                        cin >> push ;
                        while( option.size()>1 )
                         option.pop_back();
                        option.push_back(push);
                        if( option[1] == '1'){
                            check2 = false;
                            P.storepoint.clear();
                            system("cls");
                        }
                        else if ( option[1] == '2' ){
                            check1 = false;
                            check2 = false;
                            P.storepoint.clear();
                            system("cls");
                        }
                }
                //һԪ覻��֣���覻���������
                else if( flag_point == 2 ){
                    system("cls");
                    GetLocalTime(&time);
                    cout << "\n\n\n                                          "<< time.wYear << "��" << time.wMonth << setfill('0') << setw(2)<< "��" << time.wDay << setfill('0') << setw(2)<< "��  "<< setfill('0') << setw(2) << time.wHour << "ʱ" << setfill('0') << setw(2) << time.wMinute << "��\n\n"
                         << "                  ------------------------------------------------------------------------\n\n"
                         << "                                �������ʽΪ��" << orifunc << endl
                         << "                                ��������Ϊ��  " << m << endl
                         << "                                ��������Ϊ��  " << n << endl
                         << "                                ����������Ϊ��һԪ覻��֣���覻�������\n";
                    fout << "\t\t����������Ϊ��һԪ覻��֣���覻�������\n";
                            if( P.storepoint.size() == 1 ){
                                cout <<"                                覵���" << P.storepoint[0] << "����\n\n" ;
                                fout <<"\t\t覵���" << P.storepoint[0] << "����\n\n" ;
                            }
                            else if( P.storepoint.size() >= 1 ){
                                for( i = 0 ; i < P.storepoint.size() ; i ++ )
                                    cout << "                                ��" << i+1 <<"��覵���" << P.storepoint[i] << "����\n" ;
                                fout << "\t\t��" << i+1 <<"��覵���" << P.storepoint[i] << "����\n\n" ;
                            }
                    cout << "                  ------------------------------------------------------------------------\n"
                         << "                  |                                                                      |\n"
                         << "                  |                    ��ѡ������ʵ�ֵ��㷨��                            |\n"
                         << "                  |                                                                      |\n"
                         << "                  |                      1.���巨                                        |\n"
                         << "                  |                      2.���η�                                        |\n"
                         << "                  |                      3.����ɭ�㷨                                    |\n"
                         << "                  |                      4.���ؿ���Ͷ�㷨                                |\n"
                         << "                  |                      5.���ؿ���ƽ��ֵ��                              |\n"
                         << "                  |                      6.�˳�ϵͳ                                      |\n"
                         << "                  |                                                                      |\n"
                         << "                  ------------------------------------------------------------------------\n\n"
                         << "                                     ���ڴ�������Ž���ѡ��";
                    cin >> push ;
                     while( option.size()>1 )
                         option.pop_back();
                        option.push_back(push);
                    system("cls");
                    //ѡ��1.���巨���һԪ覻���
                        if( option[1] == '1'){
                        GetLocalTime(&time);
                        cout << "\n\n\n                                          "<< time.wYear << "��" << time.wMonth << setfill('0') << setw(2)<< "��" << time.wDay << setfill('0') << setw(2)<< "��  "<< setfill('0') << setw(2) << time.wHour << "ʱ" << setfill('0') << setw(2) << time.wMinute << "��\n\n"
                             << "                  ------------------------------------------------------------------------\n\n"
                             << "                                �������ʽΪ��" << orifunc << endl
                             << "                                ��������Ϊ��  " << m << endl
                             << "                                ��������Ϊ��  " << n << endl
                             << "                                ����������Ϊ��һԪ覻��֣���覻�������\n";
                        double answer = P.impro_Definition( orifunc , trim , trin);
                        cout << "                                ͨ�����巨��û���ֵΪ��" << answer;
                        fout << "\t\t\t�ö��巨���һԪ����ֵΪ��" << answer <<"\n\n";
                        fout << "\t\t\t�������������������������������������\n\n";
                        cout << "\n\n"
                         << "                  ------------------------------------------------------------------------\n"
                         << "                  |                                                                      |\n"
                         << "                  |                        ��ѡ��������еĲ�����                        |\n"
                         << "                  |                                                                      |\n"
                         << "                  |                          1.�ص���ҳ                                  |\n"
                         << "                  |                          2.�˳�ϵͳ                                  |\n"
                         << "                  |                                                                      |\n"
                         << "                  ------------------------------------------------------------------------\n\n"
                         << "                                          ���ڴ�������Ž���ѡ��";
                        cin >> push;
                        while( option.size()>2 )
                          option.pop_back();
                        option.push_back(push);
                        if( option[2] == '1'){
                            check2 = false;
                            P.storepoint.clear();
                            system("cls");
                        }
                        else if ( option[2] == '2' ){
                            check1 = false;
                            check2 = false;
                            P.storepoint.clear();
                            system("cls");
                        }
                    }
                    //ѡ��2.���η����һԪ覻���
                        if( option[1] == '2'){
                        GetLocalTime(&time);
                        cout << "\n\n\n                                          "<< time.wYear << "��" << time.wMonth << setfill('0') << setw(2)<< "��" << time.wDay << setfill('0') << setw(2)<< "��  "<< setfill('0') << setw(2) << time.wHour << "ʱ" << setfill('0') << setw(2) << time.wMinute << "��\n\n"
                             << "                  ------------------------------------------------------------------------\n\n"
                             << "                                �������ʽΪ��" << orifunc << endl
                             << "                                ��������Ϊ��  " << m << endl
                             << "                                ��������Ϊ��  " << n << endl
                             << "                                ����������Ϊ��һԪ覻��֣���覻�������\n";
                        Answer = P.impro_Trapezoid( orifunc , trim , trin);
                        cout << "                                ͨ�����η���û���ֵΪ��" << Answer;
                        fout << "\t\t\t�����η����һԪ����ֵΪ��" << Answer <<"\n\n";
                        fout << "\t\t\t�������������������������������������\n\n";
                        cout << "\n\n"
                         << "                  ------------------------------------------------------------------------\n"
                         << "                  |                                                                      |\n"
                         << "                  |                        ��ѡ��������еĲ�����                        |\n"
                         << "                  |                                                                      |\n"
                         << "                  |                          1.�ص���ҳ                                  |\n"
                         << "                  |                          2.�˳�ϵͳ                                  |\n"
                         << "                  |                                                                      |\n"
                         << "                  ------------------------------------------------------------------------\n\n"
                         << "                                          ���ڴ�������Ž���ѡ��";
                        cin >> push;
                        while( option.size()>2 )
                          option.pop_back();
                        option.push_back(push);
                        if( option[2] == '1'){
                            check2 = false;
                            P.storepoint.clear();
                            system("cls");
                        }
                        else if ( option[2] == '2' ){
                            check1 = false;
                            check2 = false;
                            P.storepoint.clear();
                            system("cls");
                        }
                    }
                    //ѡ��3.����ɭ�㷨���һԪ覻���
                        if( option[1] == '3'){
                        GetLocalTime(&time);
                        cout << "\n\n\n                                          "<< time.wYear << "��" << time.wMonth << setfill('0') << setw(2)<< "��" << time.wDay << setfill('0') << setw(2)<< "��  "<< setfill('0') << setw(2) << time.wHour << "ʱ" << setfill('0') << setw(2) << time.wMinute << "��\n\n"
                             << "                  ------------------------------------------------------------------------\n\n"
                             << "                                �������ʽΪ��" << orifunc << endl
                             << "                                ��������Ϊ��  " << m << endl
                             << "                                ��������Ϊ��  " << n << endl
                             << "                                ����������Ϊ��һԪ覻��֣���覻�������\n";
                        Answer = P.impro_Simpson( orifunc , trim , trin);
                        cout << "                                ͨ������ɭ�㷨��û���ֵΪ��" << Answer;
                        fout << "\t\t\t������ɭ�㷨���һԪ����ֵΪ��" << Answer <<"\n\n";
                        fout << "\t\t\t�������������������������������������\n\n";
                        cout << "\n\n"
                         << "                  ------------------------------------------------------------------------\n"
                         << "                  |                                                                      |\n"
                         << "                  |                        ��ѡ��������еĲ�����                        |\n"
                         << "                  |                                                                      |\n"
                         << "                  |                          1.�ص���ҳ                                  |\n"
                         << "                  |                          2.�˳�ϵͳ                                  |\n"
                         << "                  |                                                                      |\n"
                         << "                  ------------------------------------------------------------------------\n\n"
                         << "                                          ���ڴ�������Ž���ѡ��";
                        cin >> push;
                        while( option.size()>2 )
                          option.pop_back();
                        option.push_back(push);
                        if( option[2] == '1'){
                            check2 = false;
                            P.storepoint.clear();
                            system("cls");
                        }
                        else if ( option[2] == '2' ){
                            check1 = false;
                            check2 = false;
                            P.storepoint.clear();
                            system("cls");
                        }
                    }
                    //ѡ��4.���ؿ���Ͷ�㷨���һԪ覻���
                        if( option[1] == '4'){
                        GetLocalTime(&time);
                        cout << "\n\n\n                                          "<< time.wYear << "��" << time.wMonth << setfill('0') << setw(2)<< "��" << time.wDay << setfill('0') << setw(2)<< "��  "<< setfill('0') << setw(2) << time.wHour << "ʱ" << setfill('0') << setw(2) << time.wMinute << "��\n\n"
                             << "                  ------------------------------------------------------------------------\n\n"
                             << "                                �������ʽΪ��" << orifunc << endl
                             << "                                ��������Ϊ��  " << m << endl
                             << "                                ��������Ϊ��  " << n << endl
                             << "                                ����������Ϊ��һԪ覻��֣���覻�������\n";
                        Answer = P.impro_Montecarlo( orifunc , trim , trin);//******************************************************************************************
                        cout << "                                ͨ�����ؿ���Ͷ�㷨��û���ֵΪ��" << Answer;
                        fout << "\t\t\t�����ؿ���Ͷ�㷨���һԪ����ֵΪ��" << Answer <<"\n\n";
                        fout << "\t\t\t�������������������������������������\n\n";
                        cout << "\n\n"
                         << "                  ------------------------------------------------------------------------\n"
                         << "                  |                                                                      |\n"
                         << "                  |                        ��ѡ��������еĲ�����                        |\n"
                         << "                  |                                                                      |\n"
                         << "                  |                          1.�ص���ҳ                                  |\n"
                         << "                  |                          2.�˳�ϵͳ                                  |\n"
                         << "                  |                                                                      |\n"
                         << "                  ------------------------------------------------------------------------\n\n"
                         << "                                          ���ڴ�������Ž���ѡ��";
                        cin >> push;
                        while( option.size()>2 )
                          option.pop_back();
                        option.push_back(push);
                        if( option[2] == '1'){
                            check2 = false;
                            P.storepoint.clear();
                            system("cls");
                        }
                        else if ( option[2] == '2' ){
                            check1 = false;
                            check2 = false;
                            P.storepoint.clear();
                            system("cls");
                        }
                    }
                    //ѡ��5.���ؿ���ƽ��ֵ�����һԪ覻���
                        if( option[1] == '5'){
                        GetLocalTime(&time);
                        cout << "\n\n\n                                          "<< time.wYear << "��" << time.wMonth << setfill('0') << setw(2)<< "��" << time.wDay << setfill('0') << setw(2)<< "��  "<< setfill('0') << setw(2) << time.wHour << "ʱ" << setfill('0') << setw(2) << time.wMinute << "��\n\n"
                             << "                  ------------------------------------------------------------------------\n\n"
                             << "                                �������ʽΪ��" << orifunc << endl
                             << "                                ��������Ϊ��  " << m << endl
                             << "                                ��������Ϊ��  " << n << endl
                             << "                                ����������Ϊ��һԪ覻��֣���覻�������\n";
                        Answer = P.impro_Definition( orifunc , trim , trin);//******************************************************************************************
                        cout << "                                ͨ�����ؿ���ƽ��ֵ����û���ֵΪ��" << Answer;
                        fout << "\t\t\t�����ؿ���ƽ��ֵ�����һԪ����ֵΪ��" << Answer <<"\n\n";
                        fout << "\t\t\t�������������������������������������\n\n";
                        cout << "\n\n"
                         << "                  ------------------------------------------------------------------------\n"
                         << "                  |                                                                      |\n"
                         << "                  |                        ��ѡ��������еĲ�����                        |\n"
                         << "                  |                                                                      |\n"
                         << "                  |                          1.�ص���ҳ                                  |\n"
                         << "                  |                          2.�˳�ϵͳ                                  |\n"
                         << "                  |                                                                      |\n"
                         << "                  ------------------------------------------------------------------------\n\n"
                         << "                                          ���ڴ�������Ž���ѡ��";
                        cin >> push;
                        while( option.size()>2 )
                          option.pop_back();
                        option.push_back(push);
                        if( option[2] == '1'){
                            check2 = false;
                            P.storepoint.clear();
                            system("cls");
                        }
                        else if ( option[2] == '2' ){
                            check1 = false;
                            check2 = false;
                            P.storepoint.clear();
                            system("cls");
                        }
                    }
                    //6.�˳�ϵͳ
                    else if( option[1] == '6' ){
                            check1 = false;
                            P.storepoint.clear();
                            system("cls");
                        }
                }
            }//flag_letter==0
        }//while check2
    }//if һԪ������

    //��Ԫ�����֣�
    else if( option[0] == '2'){
        while( check2 ){
            GetLocalTime(&time);
            cout << "\n\n\n                                          "<< time.wYear << "��" << time.wMonth << setfill('0') << setw(2)<< "��" << time.wDay << setfill('0') << setw(2)<< "��  "<< setfill('0') << setw(2) << time.wHour << "ʱ" << setfill('0') << setw(2) << time.wMinute << "��\n\n"
                 << "                  ------------------------------------------------------------------------\n"
                 << "                  |                                                                      |\n"
                 << "                  |                      ����������£��밴�������룡                    |\n"
                 << "                  |                                                                      |\n"
                 << "                  |        1.ֻ��ʵ��+��-��*��/��^��()��[]��{}��||��log(,)��sin()��      |\n"
                 << "                  |                  cos()��tan()��asin()��acos()��atan()������          |\n"
                 << "                  |        2.log(,)����ʹ�ù���Ϊ��log(����,����)                        |\n"
                 << "                  |        3.ͬ�����š�����ֵ�Ų���Ƕ�ף����ű���ɶԳ���                |\n"
                 << "                  |        4.���з��ű�����Ӣ������                                      |\n"
                 << "                  |        5.һԪ��������x��ʾ�Ա�������Ԫ��������x��y��ʾ�Ա���         |\n"
                 << "                  |        6.���ܼ����������                                            |\n"
                 << "                  |                                                                      |\n"
                 << "                  ------------------------------------------------------------------------\n\n"
                 << "                           ���ڴ������Ԫ������";
            orifunc.clear();
            cin >> orifunc;
            fout << "\t\t�������Ԫ���������֡�\n\n"
                 << "\t\t�������ʽ��" << orifunc <<"\n";
                cout << "\n                           �������Ա���x�Ļ������ޣ�";
                cin >> m ;
                cout << "\n                           �������Ա���x�Ļ������ޣ�";
                cin >> n ;
                cout << "\n                           �������Ա���y�Ļ������ޣ�";
                cin >> m1 ;
                cout << "\n                           �������Ա���y�Ļ������ޣ�";
                cin >> n1 ;
                fout << "\t\tx�Ļ������ޣ�" << m << "\n"
                     << "\t\tx�Ļ������ޣ�" << n << "\n"
                     << "\t\ty�Ļ������ޣ�" << m1 << "\n"
                     << "\t\ty�Ļ������ޣ�" << n1 << "\n";
                trim = solve( m , 1 );
                trin = solve( n , 1 );
                trim1 = solve( m1 , 1 );
                trin1 = solve( n1 , 1 );
                GetLocalTime(&time);
                system("cls");
                    cout << "\n\n\n                                          "<< time.wYear << "��" << time.wMonth << setfill('0') << setw(2)<< "��" << time.wDay << setfill('0') << setw(2)<< "��  "<< setfill('0') << setw(2) << time.wHour << "ʱ" << setfill('0') << setw(2) << time.wMinute << "��\n\n"
                         << "                  ------------------------------------------------------------------------\n\n"
                         << "                                �������ʽΪ�� " << orifunc << endl
                         << "                                x�Ļ�������Ϊ��" << m << endl
                         << "                                x�Ļ�������Ϊ��" << n << endl
                         << "                                y�Ļ�������Ϊ��" << m1 << endl
                         << "                                y�Ļ�������Ϊ��" << n1 << endl
                         << "                                ����������Ϊ�� ��Ԫ����\n\n";
                    fout << "\t\t\t����������Ϊ����Ԫ��������\n\n";
                    cout << "                  ------------------------------------------------------------------------\n"
                         << "                  |                                                                      |\n"
                         << "                  |                    ��ѡ������ʵ�ֵ��㷨��                            |\n"
                         << "                  |                                                                      |\n"
                         << "                  |                      1.���巨                                        |\n"
                         << "                  |                      2.���η�                                        |\n"
                         << "                  |                      3.����ɭ�㷨                                    |\n"
                         << "                  |                      4.���ؿ���Ͷ�㷨                                |\n"
                         << "                  |                      5.���ؿ���ƽ��ֵ��                              |\n"
                         << "                  |                      6.�˳�ϵͳ                                      |\n"
                         << "                  |                                                                      |\n"
                         << "                  ------------------------------------------------------------------------\n\n"
                         << "                                     ���ڴ�������Ž���ѡ��";
                    cin >> push ;
                     while( option.size()>1 )
                         option.pop_back();
                    option.push_back(push);
                    system("cls");
                    //ѡ��1.���巨����Ԫ����
                    if( option[1] == '1'){
                        GetLocalTime(&time);
                        cout << "\n\n\n                                          "<< time.wYear << "��" << time.wMonth << setfill('0') << setw(2)<< "��" << time.wDay << setfill('0') << setw(2)<< "��  "<< setfill('0') << setw(2) << time.wHour << "ʱ" << setfill('0') << setw(2) << time.wMinute << "��\n\n"
                             << "                  ------------------------------------------------------------------------\n\n"
                             << "                                �������ʽΪ�� " << orifunc << endl
                             << "                                x�Ļ�������Ϊ��" << m << endl
                             << "                                x�Ļ�������Ϊ��" << n << endl
                             << "                                y�Ļ�������Ϊ��" << m1 << endl
                             << "                                y�Ļ�������Ϊ��" << n1 << endl
                             << "                                ����������Ϊ�� ��Ԫ����                                \n\n";
                        Answer = Definition_binary( orifunc , trim , trin , trim1 , trin1 );
                        cout << "                                ͨ�����巨��û���ֵΪ��" << Answer;
                        fout << "\t\t\t�ö��巨��ö�Ԫ����ֵΪ��" << Answer <<"\n\n";
                        fout << "\t\t\t�������������������������������������\n\n";
                        cout << "\n\n"
                             << "                  ------------------------------------------------------------------------\n"
                             << "                  |                                                                      |\n"
                             << "                  |                        ��ѡ��������еĲ�����                        |\n"
                             << "                  |                                                                      |\n"
                             << "                  |                          1.�ص���ҳ                                  |\n"
                             << "                  |                          2.�˳�ϵͳ                                  |\n"
                             << "                  |                                                                      |\n"
                             << "                  ------------------------------------------------------------------------\n\n"
                             << "                                          ���ڴ�������Ž���ѡ��";
                        cin >> push;
                        while( option.size()>2 )
                          option.pop_back();
                        option.push_back(push);
                        if( option[2] == '1'){
                            check2 = false;
                            system("cls");
                        }
                        else if ( option[2] == '2' ){
                            check1 = false;
                            check2 = false;
                            system("cls");
                        }
                    }
                    //ѡ��2.���η�����Ԫ����*********************************************************��ûд����
                    else if( option[1] == '2'){
                        GetLocalTime(&time);
                        cout << "\n\n\n                                          "<< time.wYear << "��" << time.wMonth << setfill('0') << setw(2)<< "��" << time.wDay << setfill('0') << setw(2)<< "��  "<< setfill('0') << setw(2) << time.wHour << "ʱ" << setfill('0') << setw(2) << time.wMinute << "��\n\n"
                             << "                  ------------------------------------------------------------------------\n\n"
                             << "                                �������ʽΪ�� " << orifunc << endl
                             << "                                x�Ļ�������Ϊ��" << m << endl
                             << "                                x�Ļ�������Ϊ��" << n << endl
                             << "                                y�Ļ�������Ϊ��" << m1 << endl
                             << "                                y�Ļ�������Ϊ��" << n1 << endl
                             << "                                ����������Ϊ�� ��Ԫ����                                \n\n";
                        Answer = Trapezoid_binary( orifunc , trim , trin , trim1 , trin1 );
                        cout << "                                ͨ�����η���û���ֵΪ��" << Answer;
                        fout << "\t\t\t�����η���ö�Ԫ����ֵΪ��" << Answer <<"\n\n";
                        fout << "\t\t\t�������������������������������������\n\n";
                        cout << "\n\n"
                             << "                  ------------------------------------------------------------------------\n"
                             << "                  |                                                                      |\n"
                             << "                  |                        ��ѡ��������еĲ�����                        |\n"
                             << "                  |                                                                      |\n"
                             << "                  |                          1.�ص���ҳ                                  |\n"
                             << "                  |                          2.�˳�ϵͳ                                  |\n"
                             << "                  |                                                                      |\n"
                             << "                  ------------------------------------------------------------------------\n\n"
                             << "                                          ���ڴ�������Ž���ѡ��";
                        cin >> push;
                        while( option.size()>2 )
                          option.pop_back();
                        option.push_back(push);
                        if( option[2] == '1'){
                            check2 = false;
                            system("cls");
                        }
                        else if ( option[2] == '2' ){
                            check1 = false;
                            check2 = false;
                            system("cls");
                        }
                    }
                    //ѡ��3.����ɭ�㷨����Ԫ����
                    else if( option[1] == '3'){
                        GetLocalTime(&time);
                        cout << "\n\n\n                                          "<< time.wYear << "��" << time.wMonth << setfill('0') << setw(2)<< "��" << time.wDay << setfill('0') << setw(2)<< "��  "<< setfill('0') << setw(2) << time.wHour << "ʱ" << setfill('0') << setw(2) << time.wMinute << "��\n\n"
                             << "                  ------------------------------------------------------------------------\n\n"
                             << "                                �������ʽΪ�� " << orifunc << endl
                             << "                                x�Ļ�������Ϊ��" << m << endl
                             << "                                x�Ļ�������Ϊ��" << n << endl
                             << "                                y�Ļ�������Ϊ��" << m1 << endl
                             << "                                y�Ļ�������Ϊ��" << n1 << endl
                             << "                                ����������Ϊ�� ��Ԫ����                                \n\n";
                        sim = exact_Simpson_binary( orifunc , trim , trin , trim1 , trin1 , 0.00001);
                        cout << "                                ͨ������ɭ�㷨��û���ֵΪ��"<< sim ;
                        fout << "\t\t\t������ɭ�㷨��ö�Ԫ����ֵΪ��" << Answer <<"\n\n";
                        fout << "\t\t\t�������������������������������������\n\n";
                        cout << "\n\n"
                             << "                  ------------------------------------------------------------------------\n"
                             << "                  |                                                                      |\n"
                             << "                  |                        ��ѡ��������еĲ�����                        |\n"
                             << "                  |                                                                      |\n"
                             << "                  |                          1.�ص���ҳ                                  |\n"
                             << "                  |                          2.�˳�ϵͳ                                  |\n"
                             << "                  |                                                                      |\n"
                             << "                  ------------------------------------------------------------------------\n\n"
                             << "                                          ���ڴ�������Ž���ѡ��";
                        cin >> push;
                        while( option.size()>2 )
                          option.pop_back();
                        option.push_back(push);
                        if( option[2] == '1'){
                            check2 = false;
                            system("cls");
                        }
                        else if ( option[2] == '2' ){
                            check1 = false;
                            check2 = false;
                            system("cls");
                        }
                    }
                    //ѡ��4.���ؿ���Ͷ�㷨����Ԫ����
                    else if( option[1] == '4'){
                        GetLocalTime(&time);
                        cout << "\n\n\n                                          "<< time.wYear << "��" << time.wMonth << setfill('0') << setw(2)<< "��" << time.wDay << setfill('0') << setw(2)<< "��  "<< setfill('0') << setw(2) << time.wHour << "ʱ" << setfill('0') << setw(2) << time.wMinute << "��\n\n"
                             << "                  ------------------------------------------------------------------------\n\n"
                             << "                                �������ʽΪ�� " << orifunc << endl
                             << "                                x�Ļ�������Ϊ��" << m << endl
                             << "                                x�Ļ�������Ϊ��" << n << endl
                             << "                                y�Ļ�������Ϊ��" << m1 << endl
                             << "                                y�Ļ�������Ϊ��" << n1 << endl
                             << "                                ����������Ϊ�� ��Ԫ����                                \n\n";
                        Answer = Montecarlo_binary( orifunc , trim , trin , trim1 , trin1 );
                        cout << "                                ͨ�����ؿ���Ͷ�㷨��û���ֵΪ��" << Answer;
                        fout << "\t\t\t�����ؿ���Ͷ�㷨��ö�Ԫ����ֵΪ��" << Answer <<"\n\n";
                        fout << "\t\t\t�������������������������������������\n\n";
                        cout << "\n\n"
                             << "                  ------------------------------------------------------------------------\n"
                             << "                  |                                                                      |\n"
                             << "                  |                        ��ѡ��������еĲ�����                        |\n"
                             << "                  |                                                                      |\n"
                             << "                  |                          1.�ص���ҳ                                  |\n"
                             << "                  |                          2.�˳�ϵͳ                                  |\n"
                             << "                  |                                                                      |\n"
                             << "                  ------------------------------------------------------------------------\n\n"
                             << "                                          ���ڴ�������Ž���ѡ��";
                        cin >> push;
                        while( option.size()>2 )
                          option.pop_back();
                        option.push_back(push);
                        if( option[2] == '1'){
                            check2 = false;
                            system("cls");
                        }
                        else if ( option[2] == '2' ){
                            check1 = false;
                            check2 = false;
                            system("cls");
                        }
                    }
                    //ѡ��5.���ؿ���ƽ��ֵ�����
                    else if( option[1] == '5'){
                        GetLocalTime(&time);
                        cout << "\n\n\n                                          "<< time.wYear << "��" << time.wMonth << setfill('0') << setw(2)<< "��" << time.wDay << setfill('0') << setw(2)<< "��  "<< setfill('0') << setw(2) << time.wHour << "ʱ" << setfill('0') << setw(2) << time.wMinute << "��\n\n"
                             << "                  ------------------------------------------------------------------------\n\n"
                             << "                                �������ʽΪ�� " << orifunc << endl
                             << "                                x�Ļ�������Ϊ��" << m << endl
                             << "                                x�Ļ�������Ϊ��" << n << endl
                             << "                                y�Ļ�������Ϊ��" << m1 << endl
                             << "                                y�Ļ�������Ϊ��" << n1 << endl
                             << "                                ����������Ϊ�� ��Ԫ����                                \n\n";
                        Answer = montecarlo_binary( orifunc , trim , trin , trim1 , trin1 );
                        cout << "                                ͨ�����ؿ���Ͷ�㷨��û���ֵΪ��" << Answer;
                        fout << "\t\t\t�����ؿ���Ͷ�㷨��ö�Ԫ����ֵΪ��" << Answer <<"\n\n";
                        fout << "\t\t\t�������������������������������������\n\n";
                        cout << "\n\n"
                             << "                  ------------------------------------------------------------------------\n"
                             << "                  |                                                                      |\n"
                             << "                  |                        ��ѡ��������еĲ�����                        |\n"
                             << "                  |                                                                      |\n"
                             << "                  |                          1.�ص���ҳ                                  |\n"
                             << "                  |                          2.�˳�ϵͳ                                  |\n"
                             << "                  |                                                                      |\n"
                             << "                  ------------------------------------------------------------------------\n\n"
                             << "                                          ���ڴ�������Ž���ѡ��";
                        cin >> push;
                        while( option.size()>2 )
                          option.pop_back();
                        option.push_back(push);
                        if( option[2] == '1'){
                            check2 = false;
                            system("cls");
                        }
                        else if ( option[2] == '2' ){
                            check1 = false;
                            check2 = false;
                            system("cls");
                        }
                    }
                    //6.�˳�ϵͳ
                    else if( option[1] == '6' ){
                            check1 = false;
                            check2 = false;
                            system("cls");
                        }
    }//while check2
    }//else if ��Ԫ������
    else if( option[0] == '3'){
        check1 = false;
        system("cls");
    }//else if �˳�ϵͳ

    }//while check1


    GetLocalTime(&time);
    cout << "\n\n\n"
         << "                  ------------------------------------------------------------------------\n"
         << "                  |                                                                      |\n"
         << "                  |                       "<< time.wYear << "��" << time.wMonth << setfill('0') << setw(2)<< "��" << time.wDay << setfill('0') << setw(2)<< "��  "<< setfill('0') << setw(2) << time.wHour << "ʱ" << setfill('0') << setw(2) << time.wMinute << "��                        |\n"
         << "                  |                                                                      |\n"
         << "                  |    --------------------------------------------------------------    |\n"
         << "                  |                                                                      |\n"
         << "                  |                            лл����ʹ�ã�                            |\n"
         << "                  |                                                                      |\n"
         << "                  |           ��Ա����������޸�������飬��ӭ�µ�13954250216        |\n"
         << "                  |                                                                      |\n"
         << "                  |                 ָ����ʦ����С��                                     |\n"
         << "                  |                 ������Ա������������Ѽѡ�����ޱ�����α�             |\n"
         << "                  |                 �汾�ţ�2.4.7.191217_demo                            |\n"
         << "                  |                                                                      |\n"
         << "                  ------------------------------------------------------------------------\n\n";
         fout << "\t\t\t                 **********************      \n"
              //<< "\t\t\t*                                                                    |\n"
              << "\t\t\t                       лл����ʹ�ã�\n"
              //<< "\t\t\t*                                                                    |\n"
              << "\t\t\t                 **********************      \n"
              << "\n\t��������������������ʱ��Ϊ��"
              << time.wYear << "��"
              << setfill('0') << setw(2)<< time.wMonth << "��"
              << setfill('0') << setw(2)<< time.wDay << "��  "
              << setfill('0') << setw(2) << time.wHour << "ʱ"
              << setfill('0') << setw(2) << time.wMinute << "��"
              << setfill('0') << setw(2) << time.wSecond << "�롪��������������\n\n\n\n\n\n" ;
        getch();

    fout.close();
    return 0 ;
}



