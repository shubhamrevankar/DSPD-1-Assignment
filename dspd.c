#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
struct product{
    char category[20];
    char name[30];
    int price;
    int stock;
    bool offer_flag;
    int id;
    char colour[15];
    char brand_name[20];
    int offer_percent; 
    char dealer_name[20];
};
struct customer_purchases{
     int date;
     int rating_in_stars;
     char review[100];
};
struct customer_info{
    int id;
    char password[8];
    char name[30];
    char address[50];
    int number_of_purchase;
    // struct customer_purchases *customer_purchase = (struct customer_purchases *)malloc(sizeof(struct customer_purchases)*number_of_purchase); 
    struct customer_purchases cus_pur[100];
};
struct dealer_info{
    char name[20];
    int no_of_sales;
    int stock;
};
void swap (struct product *a,struct product *b){
    struct product *t =a;
    *a=*b;
    *b=*t;
}

void stock_less_than_reorder_wrt_dealer(struct product prod_data[],int n,int reorder){
    
    
    /////----------------------------------------------------------------
    int k, j;
    bool swapped=false;
    for (k = 0; k < n-1 && swapped==false; k++)
    {
        swapped = true;
        for (j = 0; j < n-k-1; j++)
        {
            if (prod_data[j].stock > prod_data[j+1].stock)
            {
                struct product t = prod_data[j];
                prod_data[j]  =prod_data[j+1];
                prod_data[j+1] = t;
                // swap(&prod_data[j], &prod_data[j+1]);
                swapped = false;
            }
        }
    }
    /////----------------------------------------------------------------
        for (int i = 0; i < n && prod_data[i].stock<reorder; i++)
        {
            if(strcmp(prod_data[i].dealer_name,"ram-sales")==0){
                printf("------------------------------------------------------\n");
                printf("prod name: %s\n",prod_data[i].name);
                printf("brand name: %s\n",prod_data[i].brand_name);
                printf("prod-id: %d\n",prod_data[i].id);
                printf("category: %s\n",prod_data[i].category);
                printf("price: %d\n",prod_data[i].price);
                printf("colour: %s\n",prod_data[i].colour);
                printf("stock: %d\n",prod_data[i].stock);
                printf("dealer: %s\n",prod_data[i].dealer_name);
                printf("offer-flag: %d\n",prod_data[i].offer_flag);
                printf("offer-per: %d\n",prod_data[i].offer_percent);
                printf("------------------------------------------------------\n");
            }
        }
        for (int i = 0; i < n && prod_data[i].stock<reorder; i++)
        {
            if(strcmp(prod_data[i].dealer_name,"unity-sales")==0){
                printf("------------------------------------------------------\n");
                printf("prod name: %s\n",prod_data[i].name);
                printf("brand name: %s\n",prod_data[i].brand_name);
                printf("prod-id: %d\n",prod_data[i].id);
                printf("category: %s\n",prod_data[i].category);
                printf("price: %d\n",prod_data[i].price);
                printf("colour: %s\n",prod_data[i].colour);
                printf("stock: %d\n",prod_data[i].stock);
                printf("dealer: %s\n",prod_data[i].dealer_name);
                printf("offer-flag: %d\n",prod_data[i].offer_flag);
                printf("offer-per: %d\n",prod_data[i].offer_percent);
                printf("------------------------------------------------------\n");
            }
        }
        for (int i = 0; i < n && prod_data[i].stock<reorder; i++)
        {
            if(strcmp(prod_data[i].dealer_name,"one-sales")==0){
                printf("------------------------------------------------------\n");
                printf("prod name: %s\n",prod_data[i].name);
                printf("brand name: %s\n",prod_data[i].brand_name);
                printf("prod-id: %d\n",prod_data[i].id);
                printf("category: %s\n",prod_data[i].category);
                printf("price: %d\n",prod_data[i].price);
                printf("colour: %s\n",prod_data[i].colour);
                printf("stock: %d\n",prod_data[i].stock);
                printf("dealer: %s\n",prod_data[i].dealer_name);
                printf("offer-flag: %d\n",prod_data[i].offer_flag);
                printf("offer-per: %d\n",prod_data[i].offer_percent);
                printf("------------------------------------------------------\n");
            }
        }
    }

void stock_less_than_reorder_wrt_category (struct product prod_data[],int n,int reorder){
    
    
    /////----------------------------------------------------------------
    int k, j;
    bool swapped=false;
    for (k = 0; k < n-1 && swapped==false; k++)
    {
        swapped = true;
        for (j = 0; j < n-k-1; j++)
        {
            if (prod_data[j].stock > prod_data[j+1].stock)
            {
                struct product t = prod_data[j];
                prod_data[j]  =prod_data[j+1];
                prod_data[j+1] = t;
                swapped = false;
            }
        }
    }
    /////----------------------------------------------------------------
        for (int i = 0; i < n && prod_data[i].stock<reorder; i++)
        {
            if(strcmp(prod_data[i].category,"electronics")==0){
                printf("------------------------------------------------------\n");
                printf("prod name: %s\n",prod_data[i].name);
                printf("brand name: %s\n",prod_data[i].brand_name);
                printf("prod-id: %d\n",prod_data[i].id);
                printf("category: %s\n",prod_data[i].category);
                printf("price: %d\n",prod_data[i].price);
                printf("colour: %s\n",prod_data[i].colour);
                printf("stock: %d\n",prod_data[i].stock);
                printf("dealer: %s\n",prod_data[i].dealer_name);
                printf("offer-flag: %d\n",prod_data[i].offer_flag);
                printf("offer-per: %d\n",prod_data[i].offer_percent);
                printf("------------------------------------------------------\n");
            }
        }
        for (int i = 0; i < n && prod_data[i].stock<reorder; i++)
        {
            if(strcmp(prod_data[i].category,"clothing")==0){
                printf("------------------------------------------------------\n");
                printf("prod name: %s\n",prod_data[i].name);
                printf("brand name: %s\n",prod_data[i].brand_name);
                printf("prod-id: %d\n",prod_data[i].id);
                printf("category: %s\n",prod_data[i].category);
                printf("price: %d\n",prod_data[i].price);
                printf("colour: %s\n",prod_data[i].colour);
                printf("stock: %d\n",prod_data[i].stock);
                printf("dealer: %s\n",prod_data[i].dealer_name);
                printf("offer-flag: %d\n",prod_data[i].offer_flag);
                printf("offer-per: %d\n",prod_data[i].offer_percent);
                printf("------------------------------------------------------\n");
            }
        }
        for (int i = 0; i < n && prod_data[i].stock<reorder; i++)
        {
            if(strcmp(prod_data[i].category,"groceries")==0){
                printf("------------------------------------------------------\n");
                printf("prod name: %s\n",prod_data[i].name);
                printf("brand name: %s\n",prod_data[i].brand_name);
                printf("prod-id: %d\n",prod_data[i].id);
                printf("category: %s\n",prod_data[i].category);
                printf("price: %d\n",prod_data[i].price);
                printf("colour: %s\n",prod_data[i].colour);
                printf("stock: %d\n",prod_data[i].stock);
                printf("dealer: %s\n",prod_data[i].dealer_name);
                printf("offer-flag: %d\n",prod_data[i].offer_flag);
                printf("offer-per: %d\n",prod_data[i].offer_percent);
                printf("------------------------------------------------------\n");
            }
        }
        for (int i = 0; i < n && prod_data[i].stock<reorder; i++)
        {
            if(strcmp(prod_data[i].category,"medicines")==0){
                printf("------------------------------------------------------\n");
                printf("prod name: %s\n",prod_data[i].name);
                printf("brand name: %s\n",prod_data[i].brand_name);
                printf("prod-id: %d\n",prod_data[i].id);
                printf("category: %s\n",prod_data[i].category);
                printf("price: %d\n",prod_data[i].price);
                printf("colour: %s\n",prod_data[i].colour);
                printf("stock: %d\n",prod_data[i].stock);
                printf("dealer: %s\n",prod_data[i].dealer_name);
                printf("offer-flag: %d\n",prod_data[i].offer_flag);
                printf("offer-per: %d\n",prod_data[i].offer_percent);
                printf("------------------------------------------------------\n");
            }
        }
    }


void products_with_offers (struct product prod_data[],int n){
    for (int i = 0; i < n; i++)
    {
        if(prod_data[i].offer_flag){
            printf("------------------------------------------------------\n");
            printf("prod name: %s\n",prod_data[i].name);
            printf("brand name: %s\n",prod_data[i].brand_name);
            printf("prod-id: %d\n",prod_data[i].id);
            printf("category: %s\n",prod_data[i].category);
            printf("price: %d\n",prod_data[i].price);
            printf("colour: %s\n",prod_data[i].colour);
            printf("stock: %d\n",prod_data[i].stock);
            printf("dealer: %s\n",prod_data[i].dealer_name);
            printf("offer-per: %d\n",prod_data[i].offer_percent);
            printf("------------------------------------------------------\n");
        }
    }
    
}

void recommendations(struct product prod_data[],char pn[],char bn[],int n){

    for (int i = 0; i < n; i++)
    {
        if(strcmp(prod_data[i].brand_name,pn)==0 || strcmp(prod_data[i].name,bn)==0){
            printf("------------------------------------------------------\n");
            printf("prod name: %s\n",prod_data[i].name);
            printf("brand name: %s\n",prod_data[i].brand_name);
            printf("prod-id: %d\n",prod_data[i].id);
            printf("category: %s\n",prod_data[i].category);
            printf("price: %d\n",prod_data[i].price);
            printf("colour: %s\n",prod_data[i].colour);
            printf("stock: %d\n",prod_data[i].stock);
            printf("dealer: %s\n",prod_data[i].dealer_name);
            printf("offer-flag: %d\n",prod_data[i].offer_flag);
            printf("offer-per: %d\n",prod_data[i].offer_percent);
            printf("------------------------------------------------------\n");
        }
    }
    

}


void search_by_category(struct product prod_data[],char cat[],int n){

    for (int i = 0; i < n; i++)
    {
        if(strcmp(prod_data[i].category,cat)==0){
            printf("brand name: %s\n",prod_data[i].brand_name);
            printf("prod-id: %d\n",prod_data[i].id);
            printf("prod name: %s\n",prod_data[i].name);
            printf("price: %d\n",prod_data[i].price);
            printf("colour: %s\n",prod_data[i].colour);
            printf("stock: %d\n",prod_data[i].stock);
            printf("dealer: %s\n",prod_data[i].dealer_name);
            printf("offer-flag: %d\n",prod_data[i].offer_flag);
            printf("offer-per: %d\n",prod_data[i].offer_percent);
        }
    }
}
void search_by_prod_name(struct product prod_data[],char cat[],int n){

    for (int i = 0; i < n; i++)
    {
        if(strcmp(prod_data[i].name,cat)==0){
            printf("------------------------------------------------------\n");
            printf("brand name: %s\n",prod_data[i].brand_name);
            printf("prod-id: %d\n",prod_data[i].id);
            printf("category: %s\n",prod_data[i].category);
            printf("price: %d\n",prod_data[i].price);
            printf("colour: %s\n",prod_data[i].colour);
            printf("stock: %d\n",prod_data[i].stock);
            printf("dealer: %s\n",prod_data[i].dealer_name);
            printf("offer-flag: %d\n",prod_data[i].offer_flag);
            printf("offer-per: %d\n",prod_data[i].offer_percent);
            printf("------------------------------------------------------\n");
        }
    }
}
void search_by_brand_name(struct product prod_data[],const char cat[],int n){

    for (int i = 0; i < n; i++)
    {
        if(strcmp(prod_data[i].brand_name,cat)==0){
            printf("------------------------------------------------------\n");
            printf("product name: %s\n",prod_data[i].name);
            printf("prod-id: %d\n",prod_data[i].id);
            printf("category: %s\n",prod_data[i].category);
            printf("price: %d\n",prod_data[i].price);
            printf("colour: %s\n",prod_data[i].colour);
            printf("stock: %d\n",prod_data[i].stock);
            printf("dealer: %s\n",prod_data[i].dealer_name);
            printf("offer-flag: %d\n",prod_data[i].offer_flag);
            printf("offer-per: %d\n",prod_data[i].offer_percent);
            printf("------------------------------------------------------\n");
        }
    }
}
void search_by_colour(struct product prod_data[],const char cat[],int n){

    for (int i = 0; i < n; i++)
    {
        if(strcmp(prod_data[i].colour,cat)==0){
            printf("------------------------------------------------------\n");
            printf("brand name: %s\n",prod_data[i].brand_name);
            printf("product name: %s\n",prod_data[i].name);
            printf("prod-id: %d\n",prod_data[i].id);
            printf("category: %s\n",prod_data[i].category);
            printf("price: %d\n",prod_data[i].price);
            printf("stock: %d\n",prod_data[i].stock);
            printf("dealer: %s\n",prod_data[i].dealer_name);
            printf("offer-flag: %d\n",prod_data[i].offer_flag);
            printf("offer-per: %d\n",prod_data[i].offer_percent);
            printf("------------------------------------------------------\n");
        }
    }
}

// int cmpfunc (const void * a, const void * b) {
//    return ( *(int*)a - *(int*)b );
// }


void sort(struct product arr[],struct dealer_info brr[],int n,int m){
    int i, j;
    bool swapped=false;
    for (i = 0; i < n-1 && swapped==false; i++)
    {
        swapped = true;
        for (j = 0; j < n-i-1; j++)
        {
            if (arr[j].price > arr[j+1].price)
            {
                struct product t = arr[j];
                arr[j]  =arr[j+1];
                arr[j+1] = t;
                swapped = false;
            }
            else if(arr[j].price == arr[j+1].price){
                
                int temp1,temp2;
                for (int k = 0; k < m; k++){
                    if(strcmp(arr[j].dealer_name,brr[k].name)==0){
                        temp1 = brr[k].no_of_sales;
                    }
                }
                for (int k = 0; k < m; k++){
                    if(strcmp(arr[j+1].dealer_name,brr[k].name)==0){
                        temp2 = brr[k].no_of_sales;
                    }
                }
                if(temp1<temp2){
                    struct product t = arr[j];
                    arr[j]  =arr[j+1];
                    arr[j+1] = t;
                }
            } 
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("------------------------------------------------------\n");
        printf("prod name: %s\n",arr[i].name);
        printf("brand name: %s\n",arr[i].brand_name);
        printf("prod-id: %d\n",arr[i].id);
        printf("category: %s\n",arr[i].category);
        printf("price: %d\n",arr[i].price);
        printf("colour: %s\n",arr[i].colour);
        printf("stock: %d\n",arr[i].stock);
        printf("dealer: %s\n",arr[i].dealer_name);
        printf("offer-flag: %d\n",arr[i].offer_flag);
        printf("offer-per: %d\n",arr[i].offer_percent);
        printf("------------------------------------------------------\n");
    }
}


int main()
{
    static int count=0;
    struct product prod_data[10];
    struct dealer_info dealer_data[3];

    printf("\n");
    printf("\n");
    printf("-----------------------Welcome to our E-Shopping-----------------------");
    printf("\n");
    printf("Please type your inputs:");
    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        scanf("%s",dealer_data[i].name);
        scanf("%d",&dealer_data[i].no_of_sales);
    }
    for (int i = 0; i < 10; i++)
    {
        scanf("%s",prod_data[i].category);
        scanf("%s",prod_data[i].name);
        scanf("%d",&prod_data[i].price);
        scanf("%d",&prod_data[i].stock);
        scanf("%d",&prod_data[i].offer_flag);
        scanf("%d",&prod_data[i].id);
        scanf("%s",prod_data[i].colour);
        scanf("%s",prod_data[i].brand_name);
        scanf("%d",&prod_data[i].offer_percent);
        scanf("%s",prod_data[i].dealer_name);
    }


    int q;
    printf("\n");
    printf("Which problem do you want to solve ? (1-6)");
    printf("\n");
    printf("1.Search your product by...\n");
    printf("2.Find Best Seller and Least price Products\n");
    printf("3.See recommendations\n");
    printf("4.Products having less than reorder quantity\n");
    printf("5.Register yourself\n");
    printf("6.Display products with offers\n");
    printf("\n");
    scanf("%d",&q);
    switch (q)
    {
    case 1:
        int z;
        printf("Search by-\n 1.Category\n2.Product name\n3.Color\n4.Brand name\n");
        scanf("%d",&z);
        switch (z)
        {
        case 1:
            char input_category[20];
            printf("Which Category do you want to search for: ");
            scanf("%s",input_category);
            search_by_category(prod_data,input_category,10);
            break;
        case 2:
            char input_prodname[20];
            printf("Which Product do you want to search for: ");
            scanf("%s",input_prodname);
            search_by_prod_name(prod_data,input_prodname,10);
            break;
        case 3:
            char input_color[20];
            printf("Which Colour do you want to search for: ");
            scanf("%s",input_color);
            search_by_colour(prod_data,input_color,10);
            break;
        case 4:
            char input_brand_name[20];
            printf("Which Brand Name do you want to search for: ");
            scanf("%s",input_brand_name);
            search_by_brand_name(prod_data,input_brand_name,10);
            break;
        }
        break;
    case 2:
        sort(prod_data,dealer_data,10,3);
        break;
    case 3:
        char purchased_prod_name[20];
        char purchased_brand_name[20];
        printf("\nRecommend by brand name: ");
        scanf("%s",purchased_prod_name);
        printf("\nRecommend by Product name: ");
        scanf("%s",purchased_brand_name);
        recommendations(prod_data,purchased_prod_name,purchased_brand_name,10);
        break;
    case 4:
        int y;
        printf("Display-\n1.Category wise\n2.Dealer wise\n");
        scanf("%d",&y);
        switch (y)
        {
        case 1:
            stock_less_than_reorder_wrt_category(prod_data,10,10);
            break;
        case 2:
            stock_less_than_reorder_wrt_dealer(prod_data,10,10);
            break;
        break;
        }
    case 5:
        
        struct customer_info registration;
        printf("\nEnter your ID: ");
        scanf("%d",&registration.id);
        printf("\nEnter your password: ");
        scanf("%s",registration.password);
        printf("\nEnter your Name: ");
        scanf("%s",registration.name);
        printf("\nEnter your Address: ");
        scanf("%s",registration.address);
        printf("\nEnter number of purchases: ");
        scanf("%d",&registration.number_of_purchase);
        for (int i = 0; i < registration.number_of_purchase; i++){
            printf("For product %d\n",i+1);
            printf("\nEnter date: ");
            scanf("%d",&registration.cus_pur[count].date);
            printf("\nEnter rating: ");
            scanf("%d",&registration.cus_pur[count].rating_in_stars);
            printf("\nEnter your review: ");
            fflush(stdin);
            gets(registration.cus_pur[count].review);
            count++;
        }
        printf("\n-----------------------Your registeration was successful-----------------------");

        break;
    case 6:
        products_with_offers(prod_data,10);
        break;
    default:
        printf("-----------------------Thanks For Visiting-----------------------\n");
    }




    return 0;
}