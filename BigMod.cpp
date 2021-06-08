llu BIGMOD(llu B, llu P, llu M){
    if(P==0) return 1%M;
    if(P%2==0){
        llu p1=(BIGMOD(B,P/2,M))%M;
        return (p1*p1)%M;
    }
    else{
        llu p1=B%M;
        llu p2=(BIGMOD(B,P-1,M))%M;
        return (p1*p2)%M;
    }
}
