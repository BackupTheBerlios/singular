LIB"tst.lib";
tst_init();

ring r = integer,(x,y),dp;
r;
list R = ringlist(r);
R;
def S = ring(R);
S;
kill S;
kill r;
ring r = (integer,2,10),(x,y),dp;
r;
list R = ringlist(r);
R;
def S = ring(R);
S;
kill S;
kill r;
ring r = (integer,2,60),(x,y),dp;
r;
list R = ringlist(r);
R;
def S = ring(R);
S;
kill S;
kill r;
ring r = (integer,343434),(x,y),dp;
r;
list R = ringlist(r);
R;
def S = ring(R);
S;
kill S;
kill r;
ring r = (integer,343434,1,398874,2337646),(x,y),dp;
r;
list R = ringlist(r);
R;
def S = ring(R);
S;
kill S;
kill r;

ring r = (integer,343434,1,398874,2337646),(x,y),dp;
kill r;
ring r;
kill r;
ring r = (integer,343434,1,398874,2337646),(x,y),dp;
r;

tst_status(1);$
