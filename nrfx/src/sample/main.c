#include <nrfx.h>
#include <nrf5340_application.h>
#include <nrfx_config.h>
#include <nrf.h>
#include <nrf_gpio.h>
#include <nrfx_systick.h>
#include <nrfx_uarte.h>
#include <labb-1.h>
#include <list.h>
#include <Sorting.h>
#include <spel.h>
// #include <hashtable.h>
// #include <BSTree-5.h>

/*
From the NRF5340DK documentation:

Button 1    P0.23   i.e. 23
Button 2    P0.24
Button 3    P0.08
Button 4    P0.09
LED 1       P0.28   i.e. 28
LED 2       P0.29
LED 3       P0.30
LED 4       P0.31

*/

int comp(int* a, int* b) {
    if (*a > *b)
        return 1;
    if (*a == *b)
        return 0;
    if (*a < *b)
        return -1;
}

#define TABLE_SIZE 10
int main(void) {
    runGame();

    // init_all();
    // init_rng();
    // nrfx_systick_init();

    // int arr[TABLE_SIZE];
    // List list = random_linked_list(TABLE_SIZE);

    // char clear[] = "\033cTest\n\r";
    // char str[] = ", ";
    // char str2[] = "\n\r";
    // char strBfr[100];
    // uarte_write(clear, strlen(clear));

    // random_array(arr, TABLE_SIZE);
    // uarte_write(str2, strlen(str2));

    // print_list(list);
    // for(int i = 0; i < TABLE_SIZE; i++) {
    //     send_int(arr[i]);
    //     uarte_write(str, strlen(str));
    // }
    // uarte_write(str2, strlen(str2));
    // uarte_write(str2, strlen(str2));

    // nrf_systick_val_clear();
    // uint32_t pretime = nrf_systick_val_get();

    // bubble_sort(&list);

    // // RadixList list = ArrayToRadixList(arr, TABLE_SIZE);
    // // MergeSort(arr, sizeof(int), TABLE_SIZE, comp);
    // // RadixSort(&list);
    // // RadixListToArray(list, arr, TABLE_SIZE);
    
    // uint32_t posttime = nrf_systick_val_get();
    // sprintf(strBfr, "\n\n\rtime: %d\n\r", pretime - posttime);
    // uarte_write(strBfr, strlen(strBfr));

    // send_int(is_sorted_array(arr, TABLE_SIZE));
    // // send_int(is_sorted(list));
    // uarte_write(str2, strlen(str2));
    // uarte_write(str2, strlen(str2));

    // print_list(list);
    // // for(int i = 0; i < TABLE_SIZE; i++) {
    // //     send_int(arr[i]);
    // //     uarte_write(str, strlen(str));
    // // }
    // uarte_write(str2, strlen(str2));
    
    // char str[100];

    // init_all();
    // nrfx_systick_init();

    // send_int(hash(-101));
    // return;

    // HashTable ht;
    // initTable(&ht);

    // for (int i = 1; i <= TABLE_SIZE; i++) {
    //     sprintf(str, "%d", i);
    //     insert(&ht, i, str);
    // }

    // printTable(&ht);

    // nrf_systick_val_clear();
    // uint32_t pretime = nrf_systick_val_get();

    // get(&ht, 10);
    
    // uint32_t posttime = nrf_systick_val_get();
    // sprintf(str, "\n\n\rtime: %d\n\r", pretime - posttime);
    // uarte_write(str, strlen(str));

    // Uppgift 1.1
    // size | ticks
    // 3    | 285
    // 7    | 613
    // 15   | 1269
    // 31   | 2581
    // 63   | 5205
    // 127  | 10453
    
    // Uppgift 1.2
    // size | ticks
    // 3    | 214
    // 7    | 314
    // 15   | 428
    // 31   | 530
    // 63   | 632
    // 127  | 734

    // Uppgift 2.1
    // anrop | ticks
    // 1     | 210
    // 5     | 210
    // 10    | 210

    // Uppgift 2.2
    // anrop | ticks
    // 10    | 210
    // 50    | 378
    // 100   | 588

    // init_all();
    // nrfx_systick_init();

    // char newLine[] = "\n\r";
    // char Prompt0[] = "\033cClick button 1 to start\n\r\n";
    // char Prompt1[] = "Click button 1, 2 or 3\n\r";

    // uarte_write(Prompt0, strlen(Prompt0));
    // init_rng();
    // while (nrf_gpio_pin_read(BUTTON1) == 0)
    //     nrfx_systick_delay_ms(50);

    // List* stack = (List*)malloc(sizeof(List));
    // List* que = (List*)malloc(sizeof(List));

    // *stack = create_empty_list();
    // *que = create_empty_list();

    // while (1) {
    //     uarte_write(Prompt1, strlen(Prompt1));
    //     int buttonID = 0;
    //     while (buttonID == 0) {
    //         if (nrf_gpio_pin_read(BUTTON1) == 0)
    //             buttonID = 1;
    //         else if (nrf_gpio_pin_read(BUTTON2) == 0)
    //             buttonID = 2;
    //         else if (nrf_gpio_pin_read(BUTTON3) == 0)
    //             buttonID = 3;

    //         nrfx_systick_delay_ms(50);
    //     }

    //     int n;
    //     switch (buttonID) {
    //         case 1:
    //             n = rand() % 100;
    //             if (n % 2 == 0)
    //                 add_last(stack, n);
    //             else
    //                 add_last(que, n);
    //             break;
    //         case 2:
    //             remove_last(stack);
    //             break;
    //         case 3:
    //             remove_first(que);
    //             break;
    //     }
        
    //     if (!is_empty(*stack)) 
    //         send_int(get_last_element(*stack));
    //     uarte_write(newLine, strlen(newLine));

    //     if (!is_empty(*que)) 
    //         send_int(get_first_element(*que));
    //     uarte_write(newLine, strlen(newLine));
        
    //     uarte_write(newLine, strlen(newLine));
    //     delay_s(1);
    // }

    /*/ Uppgift 1 
    
    nrfx_systick_init();
    uarte_init();   
    button_led_init();
    rtc_init();

    char Prompt0[] = "\033cPress button 1 to start";
    char Prompt1[] = "\r\n\nEnter the following";
    char Prompt2[] = "\n\rDelay: ";
    char Prompt3[] = "\n\rNumber of periods: ";
    char Prompt4[] = "\n\n\r";

    int delay;
    int ammount;

    uarte_write(Prompt0, strlen(Prompt0));
    init_rng();
    uarte_write(Prompt1, strlen(Prompt1));

    uarte_write(Prompt2, strlen(Prompt2));
    delay = read_int();
    
    uarte_write(Prompt3, strlen(Prompt3));
    ammount = read_int();

    for (int i = 0; i < ammount; i++) {
        int rng = rand() %4;

        switch (rng) {
            case 0:
                nrf_gpio_pin_write(LED1, LED_ON);
                break;
            case 1:
                nrf_gpio_pin_write(LED2, LED_ON);
                break;
            case 2:
                nrf_gpio_pin_write(LED3, LED_ON);
                break;
            case 3:
                nrf_gpio_pin_write(LED4, LED_ON);
                break;
        }
        
        nrfx_systick_delay_ms(delay);

        nrf_gpio_pin_write(LED1, LED_OFF);
        nrf_gpio_pin_write(LED2, LED_OFF);
        nrf_gpio_pin_write(LED3, LED_OFF);
        nrf_gpio_pin_write(LED4, LED_OFF);
    }  

    uarte_write(Prompt4, strlen(Prompt4));
    send_int(delay * ammount);

    // Uppgist 2

    // secret = 'µ
    // goal = 0x81040000
    // inkr1 = 7
    // inkr2 = 1
    // inkr3 = 4*/
}
