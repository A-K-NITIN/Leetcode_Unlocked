int accountBalanceAfterPurchase(int purchaseAmount) {
   if(purchaseAmount%10>=5)
        purchaseAmount+=10;

    purchaseAmount/=10;

    return  ( 10-purchaseAmount)*10;     
      
}