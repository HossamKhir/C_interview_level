
#define SET_BIT(X,BIT) ((X)|(1<<BIT))
#define CLR_BIT(X,BIT) ((X)&(~(1<<BIT)))
#define GET_BIT(X,BIT) ((X)&(1<<BIT))
#define TOG_BIT(X,BIT) ((X)^(1<<BIT))
