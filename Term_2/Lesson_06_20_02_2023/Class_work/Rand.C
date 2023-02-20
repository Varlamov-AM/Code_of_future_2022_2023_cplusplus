static unsigned long int next = 1;

int rand()
{
  next = next * 1103515245 + 12345;
  return (unsigned int)(next / 65536) % 32768;
}

unsigned long long MyRand() {
    unsigned long long res = rand();
    res = (res << 15) | rand();
    res = (res << 15) | rand();
    res = (res << 15) | rand();
    res = (res << 15) | rand();
    return res;
}
