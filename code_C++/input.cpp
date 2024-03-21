#include"headers.h"
using namespace std;

bool judge(char c) //�ж��ַ�c�Ƿ�Ϊ��ֵ��С����
{
    if( c >= '0' && c <= '9' || c == '.')
        return true ;
    else
        return false ;
}
double solve( string orifunc , double x ) //����Ӽ��˳��η���e������͸���������
{
    int i , j , k , flag , a ;
    double decimal , temp ;
    char transferx[6] , transfere[12] , transferp[1222] , F ;
    string operat ;//���������
    vector<double> number;//����double������

    sprintf( transferx , "%f" , x );//��double������ת��Ϊchar�����֣�������transferx��
    sprintf( transfere , "%f" , 2.71828 );//��e������ת��Ϊchar�����֣�������transfere��
    sprintf( transferp , "%f" , 3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280);
    for( i = 0 ; orifunc[i] != '\0' ; i++){
        if( orifunc[i] == 'x' ){
            orifunc.insert( i + 1 , transferx );
            orifunc.erase( i , 1 );
        }//��orifunc�е�x�滻Ϊ������transferx�е�char������
        if( orifunc[i] == 'e' ){
            orifunc.insert( i+1 , transfere );
            orifunc.erase( i , 1 );
        }//��orifunc�е�e�滻Ϊ������transfere�е�char������
        if( orifunc[i] == 'p' ){
            orifunc.insert( i+1 , transferp );
            orifunc.erase( i , 1 );
      }
    }
        if( orifunc[0] == '-' )
            orifunc.insert(orifunc.begin(),'0');
        i = 0 ;
    while( orifunc[i] != '\0' ){
        double sum = 0 ;
        flag = 0 ;
        if( !judge(orifunc[i]) ){
            if( judge( orifunc[i-1] ) ){
            operat.push_back( orifunc[i] ) ;
            i ++ ;
            }
            else{
            flag = 1 ;
            i ++ ;
            }
        }
        a = i ;
        while( judge (orifunc[i]) ) { //�������ֵ����charת��Ϊdouble��������number��
            if( orifunc[i] >= '0' && orifunc[i] <= '9' ) { //�����������֣����������ֵ�charת��Ϊdouble�����ݴ���sum��
                sum = sum * 10 + ( orifunc[i] - 48 ) ;
                i++ ;
            }
            else if( orifunc[i] == '.' ) //����С�����֣���С�����ֵ�charת��Ϊdouble�����ݴ���decimal/j��
            {
                int j = 1 ;
                decimal = 0 ;
                i++ ;
                while( judge ( orifunc[i] ) )
                {
                    decimal = decimal * 10 + ( orifunc[i] - 48 ) ;
                    j = j * 10.0 ;
                    i++ ;
                }
                sum = sum + decimal / j ;//�������ֺ�С��������ͣ��õ�����
            }
        }
        if( judge( orifunc[a] ) ){
        if( flag ) sum = - sum ;
        number.push_back( sum ) ;}//���õ������ִ�����number������
    }
    for( k = 0 ; k < operat.size() ; k++ ) {
        for( i = 0 ; i < operat.size() ; i++ ) {
            if( operat[i] == '^' ) {
                temp = pow ( number[i] , number[i+1] ) ;
                number[i] = temp ;
                for( j = i+1 ; j < number.size() ; j++ )
                    number[j] = number[j+1] ;
                for( j = i ; j < operat.size() ; j++ )
                    operat[j] = operat[j+1] ;
            }
        }
    }
    for( k = 0 ; k < operat.size() ; k++ ) {
        for( i = 0 ; i < operat.size() ; i++ ) {
            if( operat[i] == '*' ) {
                temp = number[i] * number[i+1] ;
                number[i] = temp ;
                for( j = i+1 ; j < number.size() ; j++ )
                    number[j] = number[j+1] ;
                for( j = i ; j < operat.size() ; j++ )
                    operat[j] = operat[j+1] ;
            }
            if( operat[i] == '/' ) {
                temp = number[i] / number[i+1] ;
                number[i] = temp ;
                for( j = i+1 ; j < number.size() ; j++ )
                    number[j] = number[j+1] ;
                for( j = i ; j < operat.size() ; j++)
                    operat[j] = operat[j+1] ;
            }
        }
    }
    for( k = 0 ; k < operat.size() ; k++ ) {
        for( i = 0 ; i < operat.size() ; i++ ) {
            if( operat[i] == '+' ) {
                temp = number[i] + number[i+1] ;
                number[i] = temp ;
                for( j = i + 1 ; j < number.size(); j++ )
                    number[j] = number[j+1];
                for( j = i ; j < operat.size() ; j++ )
                    operat[j] = operat[j+1] ;
            }
            if(operat[i] == '-')
            {
                temp = number[i] - number[i+1] ;
                number[i] = temp ;
                for( j = i + 1 ; j < number.size() ; j++ )
                    number[j] = number[j+1] ;
                for( j = i ; j < operat.size() ; j++ )
                    operat[j] = operat[j+1] ;
            }
        }
    }
    operat.clear() ;
    return number[0] ;
}
string tritransfer( double mid , string orifunc , int lefthalf , int righthalf )//�������Ǻ����ͷ����Ǻ�����������滻Ϊstring
{
    int h ;
    char transfermid[6] , value[6] ;
    string check , doublecheck ;
    double trivalue ;
    sprintf( transfermid , "%f" , mid );
    for( h = lefthalf - 4 ; h < lefthalf ; h++ )
        check.push_back( orifunc[h] ) ;//ǰ�ĸ��ַ�����check�����ж��Ƿ�Ϊasin/acos/atan
    for( h = lefthalf - 3 ; h < lefthalf ; h++ )
        doublecheck.push_back( orifunc[h] ) ;
    if( check == "asin" ){
        trivalue = asin( mid ) ;//����������mid��ֵ�ķ����Ǻ���ֵ����������double��trivalue��
        sprintf( value , "%f" , trivalue ) ;//��double��trivalueת��Ϊchar��value������ʱ"asin("")"��δ��orifunc�����
        orifunc = orifunc.insert( righthalf + 1 , value ) ;
        orifunc = orifunc.erase( lefthalf-4 , righthalf - lefthalf + 5 ) ;//��value�滻orifunc�С�asin(mid)"
        check.clear() ;//���check��������ֹ�ظ�����sinֵ
        doublecheck.clear() ;
    }
    else if( check == "acos" ){
        trivalue = acos( mid ) ;
        sprintf( value , "%f" , trivalue ) ;
        orifunc = orifunc.insert( righthalf + 1 , value ) ;
        orifunc = orifunc.erase( lefthalf-4 , righthalf - lefthalf + 5 ) ;
        check.clear() ;
        doublecheck.clear() ;
    }
    else if( check == "atan" ){
        trivalue = atan( mid ) ;
        sprintf( value , "%f" , trivalue ) ;
        orifunc = orifunc.insert( righthalf + 1 , value ) ;
        orifunc = orifunc.erase( lefthalf-4 , righthalf - lefthalf + 5 ) ;
        check.clear() ;
        doublecheck.clear() ;
    }
    else if( doublecheck == "sin" ) {
        trivalue = sin( mid ) ;
        sprintf( value , "%f" , trivalue ) ;
        orifunc = orifunc.insert( righthalf + 1 , value ) ;
        orifunc = orifunc.erase( lefthalf-3 , righthalf - lefthalf + 4 ) ;
        check.clear() ;
        doublecheck.clear() ;
    }
    else if( doublecheck == "cos" ) {
        trivalue = cos( mid ) ;
        sprintf( value , "%f" , trivalue ) ;
        orifunc = orifunc.insert( righthalf + 1 , value ) ;
        orifunc = orifunc.erase( lefthalf-3 , righthalf - lefthalf + 4 ) ;
        check.clear() ;
        doublecheck.clear() ;
    }
    else if( doublecheck == "tan" ) {
        trivalue = tan( mid ) ;
        sprintf( value , "%f" , trivalue ) ;
        orifunc = orifunc.insert( righthalf + 1 , value ) ;
        orifunc = orifunc.erase( lefthalf-3 , righthalf - lefthalf + 4 ) ;
        check.clear() ;
        doublecheck.clear() ;
    }
    else{
        orifunc = orifunc.insert( righthalf + 1 , transfermid ) ;
        orifunc = orifunc.erase( lefthalf , righthalf - lefthalf + 1 ) ;
        check.clear() ;
        doublecheck.clear() ;
    }
    return orifunc ;
}
string logtransfer( double lmid , double rmid , string orifunc , int lefthalf , int righthalf )//�������Ǻ����ͷ����Ǻ�����������滻Ϊstring
{
    int h ;
    char transferlmid[6] , transferrmid[6] , value[12] ;
    string check , infvalue;
    double logvalue ;
    sprintf( transferlmid , "%f" , lmid ) ;
    sprintf( transferrmid , "%f" , rmid ) ;
    for( h = lefthalf - 3 ; h < lefthalf ; h++ )
        check.push_back( orifunc[h] ) ;
    if( check != "log" )
        cout << "��������" ;
    if( lmid == 2.71828 )
        logvalue = log( rmid );
    else if( lmid == 10 )
        logvalue = log10( rmid ) ;
    else
        logvalue = log(rmid)/log(lmid) ;
    if (isinf(logvalue)){
        orifunc = orifunc.insert( righthalf + 1 , "1000000000000" ) ;
        orifunc = orifunc.erase( lefthalf - 3 , righthalf - lefthalf + 4 ) ;
    }
    else if (isinf(-logvalue)){
        orifunc = orifunc.insert( righthalf + 1 , "-1000000000000" ) ;
        orifunc = orifunc.erase( lefthalf - 3 , righthalf - lefthalf + 4 ) ;
    }
    else{
        sprintf( value , "%f" , logvalue ) ;
        orifunc = orifunc.insert( righthalf + 1 , value ) ;
        orifunc = orifunc.erase( lefthalf - 3 , righthalf - lefthalf + 4 ) ;
    }
    check.clear() ;
    return orifunc ;
}
string transfer( int j, double x, int lefthalf, int righthalf, string orifunc )//�����ж�����log���������������������㣬���������滻Ϊstrign
{
    double lmid , rmid ;
    string lhfunction , rhfunction ;//���ڱ��������ڵ��ַ�����
    while( orifunc[j] != ',' && j < righthalf ){
        lhfunction.push_back( orifunc[j] ) ;
        j++;
    }//���������ͣ�ʱ
    lmid = solve( lhfunction , x ) ;

    if( orifunc[j] == ',' ){
        j++;
        while( j < righthalf ){
            rhfunction.push_back( orifunc[j] ) ;
            j++ ;
        }//�������",",��������֮ǰ������rhfunction��
        rmid = solve( rhfunction , x ) ;
        orifunc = logtransfer( lmid , rmid , orifunc , lefthalf , righthalf ) ;
    }//����","ʱ
    else
        orifunc = tritransfer( lmid , orifunc , lefthalf , righthalf ) ;
    lhfunction.clear() ;
    rhfunction.clear() ;
    return orifunc ;
}
double mainsolve( string orifunc , double x )//��solve�Ļ����ϼ������š����Ǻ�������������
{
    int i , j , g , lefthalf , righthalf ;
    double lmid , rmid ;
    for(g = 0 ; g < orifunc.size() ; g++ ){
    for(i = 0 ; i < orifunc.size() ; i++){
        if( orifunc[i] == '(' ){
           lefthalf = i ;
           j = i + 1 ;
           while( orifunc[j] != ')' ){
            j++ ;
            righthalf = j ;
           }
    orifunc = transfer( i + 1 , x , lefthalf , righthalf , orifunc ) ;
    break ;
        }//if find"("
    }
    }
    for( g = 0 ; g < orifunc.size() ; g++ ){
    for( i = 0 ; i < orifunc.size() ; i++){
        if( orifunc[i] == '[' ){
           lefthalf = i ;
           j = i + 1 ;
           while( orifunc[j] != ']' ){
            j++ ;
            righthalf = j ;
           }
    orifunc = transfer( i + 1 , x , lefthalf , righthalf , orifunc ) ;
    break ;
        }
    }
    }
    for( g = 0 ; g < orifunc.size() ; g++ ){
    for( i = 0 ; i < orifunc.size() ; i++){
        if( orifunc[i] == '{' ){
           lefthalf = i ;
           j = i + 1 ;
           while( orifunc[j] !='}' ){
            j++ ;
            righthalf = j ;
           }
     orifunc = transfer( i + 1 , x , lefthalf , righthalf , orifunc ) ;
     break ;
        }//if find"("
    }
    }
    double answer = solve( orifunc , x ) ;
    return answer ;

    }
double lastsolve( string orifunc , double x ) //��mainsolve�Ļ����ϼ������ֵ
{
    int i , j , k , leftabs , rightabs ;
    double absmid , answer;
    string absfunction;
    for(k = 0; k < orifunc.size(); k++) {
        for(i = 0; i < orifunc.size(); i++) {
            if(orifunc[i] == '|') {
                leftabs = i ;
                j = i + 1 ;
                while( orifunc[j] != '|' ) {
                    absfunction.push_back( orifunc[j] ) ;
                    j++ ;
                    rightabs = j ;
                }
                absmid = mainsolve( absfunction , x ) ;
                orifunc = abstransfer( absmid , orifunc , leftabs , rightabs ) ;
                absfunction.clear() ;
                break ;
            }//if find"|"
        }
    }
    answer = mainsolve( orifunc , x );
    return answer;
}
string abstransfer( double absmid , string orifunc , int leftabs , int rightabs )//�������ֵ��������滻Ϊstring
{
    char value[6] ;
    double absvalue ;
    absvalue = abs( absmid ) ;//����������absmid��ֵ�ľ���ֵ����������double��absvalue��
    sprintf( value , "%f" , absvalue ) ;//��double��absvalueת��Ϊchar��value������ʱ"|"δ��orifunc�����
    orifunc = orifunc.insert( rightabs + 1 , value ) ;
    orifunc = orifunc.erase( leftabs , rightabs - leftabs + 1 ) ;
    return orifunc ;
}
double binarysolve( string orifunc , double x , double y )//�����Ԫ����ֵ
{
    int i ;
    double answer ;
    char transfery[6] , transfere[12] , transferp[12] ;
    sprintf( transfery , "%f" , y ) ;//��double������ת��Ϊchar�����֣�������transferx��
    for(i = 0 ; orifunc[i] != '\0'; i++){
        if(orifunc[i] == 'y'){
            orifunc.insert( i + 1 , transfery ) ;
            orifunc.erase( i , 1 ) ;
        }//��orifunc�е�y�滻Ϊ������transfery�е�char������
    }
    answer = lastsolve( orifunc , x ) ;
    return answer ;
}
