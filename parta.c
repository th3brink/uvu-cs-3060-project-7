
void* incrementCounter( void* m );


int count;
    
int main () {
    count = 0;
    
    incrementCounter(count);
    
    fprint("count: %d", count);
    
    
    return 0;
}

void* incrementCounter( void* m )
    {
        int i;
        for (i = 0; i < 10; ++i)
        {
            int tempValue = count;
            sleep(1);
            tempValue = tempValue + 1;
            count = tempValue;
        }
 
        return NULL;
    }