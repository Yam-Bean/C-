#include"headers.h"
using namespace std;
//�ö��巨��һԪ�����Ļ���

double Definition( string orifunc , double down , double up ){
    int number , i ;
    double answer , delta = 0.0001 ;
    answer = 0;//���ڱ����ۼӵõ���ֵ
    number = (up - down)/delta;//�����ܹ���Ҫ�ֳɶ��ٷ�
    for( i = 0 ; i < number ; i ++ )
        answer = answer + delta * lastsolve( orifunc , down + delta * i ) ;
    return answer ;
}

//�ö��巨���Ԫ�����Ļ���
double Definition_binary(string orifunc,double downx,double upx,double downy,double upy){
    int numberx , numbery , i , j ;
    double answer , tran , delta = 0.01 ;
    answer = 0 ;
    numberx = (upx - downx)/delta ;
    numbery = (upy - downy)/delta ;
    for( i = 0 ; i < numberx ; i ++ ){
        for( j = 0 ; j < numbery ; j ++ ){
            tran = binarysolve( orifunc , downx + delta * i , downy + delta * j ) ;
            answer = answer + tran * delta * delta ;
        }
    }
    return answer;
}
//�ö��巨��һԪ覻���
double Point::impro_Definition( string orifunc , double down , double up ){
    double answer = 0 ;
    double ase = 0.001 ;
    double anothermid ;
    int i ,time = 1 ;
    vector<double> test ;
    if( storepoint.size() != 0 ){
         double sizeori =  storepoint.size() ;
    if( storepoint[0] == down){
        if( storepoint [sizeori - 1] == up){
            for( i = 0 ; i < sizeori - 1 ; i++ ){
                while( time < 9 ){
                    anothermid = Definition( orifunc , storepoint[i] + ase , storepoint[i+1] - ase ) ;
                    if( !isinf( anothermid ) )
                    test.push_back( anothermid ) ;
                    ase = ase * 0.1 ;
                    time ++ ;
                }
                ase = 0.001 ;
                time = 1 ;
                answer = answer + test[test.size()-1];
                test.clear();
            }
        }
        else{
            for( i = 0 ; i < sizeori - 2 ; i ++ ){
                while( time < 9 ){
                    anothermid = Definition( orifunc , storepoint[i] + ase , storepoint[i+1] - ase ) ;
                    if( !isinf( anothermid ) )
                    test.push_back( anothermid ) ;
                    ase = ase * 0.1 ;
                    time ++ ;

                }
                ase = 0.001 ;
                time = 1 ;
                answer = answer + test[test.size()-1];
                test.clear();
            }
            while( time < 9 ){
                    anothermid = Definition( orifunc , storepoint[sizeori - 1] + ase , up ) ;
                    if( !isinf( anothermid ) )
                    test.push_back( anothermid ) ;
                    ase = ase * 0.1 ;
                    time ++ ;
                }
                ase = 0.001 ;
                time = 1 ;
                answer = answer + test[test.size()-1];
                test.clear();
        }
    }
    else if( storepoint[sizeori - 1] == up ){
            for( i = 1 ; i < sizeori - 1 ; i ++ ){
                while( time < 9 ){
                    anothermid = Definition( orifunc , storepoint[i] + ase , storepoint[i+1] - ase ) ;
                    if( !isinf( anothermid ) )
                    test.push_back( anothermid ) ;
                    ase = ase * 0.1 ;
                    time ++ ;
                }
                ase = 0.001 ;
                time = 1 ;
                answer = answer + test[test.size()-1];
                test.clear();
            }
            while( time < 9 ){
                    anothermid = Definition( orifunc , down , storepoint[0] - ase ) ;
                    if( !isinf( anothermid ) )
                    test.push_back( anothermid ) ;
                    ase = ase * 0.1 ;
                    time ++ ;
                }
                ase = 0.001 ;
                time = 1 ;
                answer = answer + test[test.size()-1];
                test.clear();
        }
    else{
            for(i = 1 ; i < sizeori - 2 ; i ++ ){
                while( time < 9 ){
                    anothermid = Definition( orifunc , storepoint[i] + ase , storepoint[i+1] - ase ) ;
                    if( !isinf( anothermid ) )
                    test.push_back( anothermid ) ;
                    ase = ase * 0.1 ;
                    time ++ ;
                }
                ase = 0.001 ;
                time = 1 ;
                answer = answer + test[test.size()-1];
                test.clear();
            }
                while( time < 9 ){
                    anothermid = Definition( orifunc , storepoint[sizeori - 1] + ase , up ) ;
                    if( !isinf( anothermid ) )
                    test.push_back( anothermid ) ;
                    ase = ase * 0.1 ;
                    time ++ ;
                }
                ase = 0.001 ;
                time = 1 ;
                answer = answer + test[test.size()-1];
                test.clear();
                while( time < 9 ){
                    anothermid = Definition( orifunc , down , storepoint[0] - ase ) ;
                    if( !isinf( anothermid ) )
                    test.push_back( anothermid ) ;
                    ase = ase * 0.1 ;
                    time ++ ;
                }
                ase = 0.001 ;
                time = 1 ;
                answer = answer + test[test.size() - 1];
                test.clear();
    }
    }
    return answer;

}

