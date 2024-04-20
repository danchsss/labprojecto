#include <stdio.h>
#define YES 1
#define NO 0
#define MAX 1000
#define T 1
#define F 0
#define M 10
#define K 3
#define N 4
#define L 20

void pr() {
  float P, A, B, C, t1, t2;
  printf("A=");
  scanf("%f", &A);
  printf("B=");
  scanf("%f", &B);
  printf("C=");
  scanf("%f", &C);
  t1 = A + B * B;
  t2 = C - A;
  if (t2 == 0) {
    printf("деление на ноль\n");
    return -1;
  }
  P = t1 / t2;
  printf("P=%f", P);
  return 0;
}

int lr1(void) {
  float P, A, B, C, t1, t2;
  printf("A=");
  scanf("%f", &A);
  printf("B=");
  scanf("%f", &B);
  printf("C=");
  scanf("%f", &C);
  t1 = A + B * B;
  t2 = C - A;
  if (t2 == 0) {
    printf("деление на ноль\n");
    return -1;
  }
  P = t1 / t2;
  printf("P=%f\n", P);
  printf("dop\n");

  pr();

  return 0;
}

int lr2(void) {
  float s, a;
  int n, i, k;
  printf("n=");
  scanf("%d", &n);
  s = 0.;
  k = 1;
  i = 0;
  while (i < n) {
    a = (3.0 + i) / (1.0 + i * 3.0);
    s = s + a * k;
    k = -k;
    i = i + 1;
  }
  printf("s=%f\n", s);
  printf("dop\n");

  s = 0.;
  k = 1;

  for (i = 0; i < n; ++i) {
    a = (3.0 + i) / (1.0 + i * 3.0);
    s = s + a * k;
    k = -k;
  }
  printf("s=%f", s);

  return 0;
}

int lr3() {
  int c;
  int firstletter = ' ';
  int prevletter = '_';
  int endofword = YES;
  int count = 0, cnt = 0;

  while ((c = getchar()) != EOF) {
    if (endofword == YES) {
      firstletter = c;
      endofword = NO;
    }

    if (c == ' ' || c == '.' || c == '\n' || c == ',') {
      endofword = YES;

      if (prevletter == firstletter) {
        count += 1;
        if (prevletter == 'a' || prevletter == 'e' || prevletter == 'i' ||
            prevletter == 'o' || prevletter == 'u' || prevletter == 'y') {
          cnt += 1;
        }
      }
    }

    prevletter = c;
  }

  printf("count: %d\n", count);
  printf("dop\n");
  printf("cnt: %d\n", cnt);

  return 0;
}

int lr4(void) {
  int i = 0;
  int j = 0;
  int k = 0;
  int m = 0;
  int startword = F;
  int endword = F;
  int xstartword = F;
  int xendword = F;
  char c, s;
  char line[MAX];
  char buffer[MAX];
  char xline[MAX];
  char xbuffer[MAX];

  getchar();
  fgets(buffer, MAX, stdin);

  do {
    c = buffer[i];

    if (c == ',') {
      line[j++] = ' ';

      while (startword != T) {
        if (buffer[i] == ',' || buffer[i] == ' ' || buffer[i] == '.')
          i++;
        else
          startword = T;
      }

      while (endword != T) {
        if (buffer[i] != ',' && buffer[i] != ' ' && buffer[i] != '.')
          i++;
        else
          endword = T;
      }

      c = buffer[i];
    }

    startword = F;
    endword = F;

    line[j] = c;

    i++;
    j++;
  } while (c != '\0');

  puts(line);
  printf("dop\n");

  getchar();
  fgets(xbuffer, MAX, stdin);

  do {
    s = xbuffer[k];

    if (s == ',') {
      xline[m++] = ' ';

      while (xstartword != T) {
        if (xbuffer[k] == ',' || xbuffer[k] == ' ' || xbuffer[k] == '.')
          k++;
        else
          xstartword = T;
      }

      while (xendword != T) {
        if (xbuffer[k] != ',')
          k++;
        else
          xendword = T;
      }
      k++;
      s = xbuffer[k];
    }

    xstartword = F;
    xendword = F;

    xline[m] = s;

    k++;
    m++;
  } while (s != '\0');

  puts(xline);

  return 0;
}

int lr5(void) {
  int arr[M];
  int i;
  int d;
  int b;

  for (i = 0; i < M; i++)
    scanf("%d", &arr[i]);
  d = arr[1] - arr[0];

  for (i = 0; i < M; i++) {
    b = (arr[i + 1] - arr[0]) / (i + 1);
    if (b != d)
      break;
  }
  i++;

  if (i < M)
    printf("элементы массива не составляют арифметическую прогрессию :(\n");

  else
    printf("элементы массива составляют арифметическую прогрессию :)\n");
  printf("dop\n");

  int xarr[L];
  int f = 0;
  int mistakes = 0;
  i = 0;

  for (i = 0; i < L; i++)
    scanf("%d", &xarr[i]);

  for (i = 0; i < L; i++) {
    if (xarr[i] < xarr[i - 1]) {
      if (xarr[i] < xarr[i - 1] && xarr[i + 1] > xarr[i - 1] &&
          xarr[i + 2] > xarr[i - 1]) {
        printf("В прогрессии есть огрехи: %d\n", xarr[i]);
        mistakes++;
      } else {
        printf("Прогрессия не обнаружена\n");
        f = 1;
      }
    }
  }

  if (mistakes > 1)
    {
      if (f == 0)
      printf("Прогрессия не обнаружена\n");
    }
    
  else {
    if (f == 0)
      printf("Элементы массива составляют арифметическую прогрессию :)\n");
  }

  return 0;
}

int lr6(void) {
  long long int x[K][N];
  long long int b, max, min, strmax, strmin;
  long long int i, j;

  for (i = 0; i < K; i++)
    for (j = 0; j < N; j++)
      scanf("%lld", &x[i][j]);

  max = x[0][0];
  for (i = 0; i < K; i++)
    for (j = 0; j < N; j++)
      if (x[i][j] > max) {
        max = x[i][j];
        strmax = i;
      }

  min = x[0][0];
  for (i = 0; i < K; i++)
    for (j = 0; j < N; j++)
      if (x[i][j] < min) {
        min = x[i][j];
        strmin = i;
      }

  for (j = 0; j < N; j++) {
    b = x[strmax][j];
    x[strmax][j] = x[strmin][j];
    x[strmin][j] = b;
  }

  if (strmin == strmax)
    printf("max and min are situated in the same string");

  else {
    for (i = 0; i < K; i++) {
      for (j = 0; j < N; j++)
        printf("%4lld ", x[i][j]);
      printf("\n");
    }
  }
  printf("dop\n");

  return 0;
}

int lr7() {
  long z;
  unsigned long y, c, mask = 1;
  int counter = 0;
  int cntall = 0;
  int pos = 0;
  int no = 1;

  printf("z = ");
  scanf("%lx", &z);

  c = y = (unsigned int)z;
  while (y != 0) {
    cntall += y & mask;
    y >>= 1;
  }

  y = c;
  while (y != 0) {
    counter += y & mask;
    if (counter == (cntall / 2)) {
      if (cntall % 2 == 1) {
        counter = 0;
        while (y != 0) {
          pos++;
          y >>= 1;
          counter += y & mask;
          if (counter == 1) {
            no = 0;
            printf("position: %d\n", pos);
            break;
          }
        }
      }
      if (cntall % 2 == 0) {
        pos++;
        y >>= 1;
        counter += y & mask;
        if (counter == (cntall / 2)) {
          no = 0;
          printf("position: %d\n", pos);
          break;
        }
      } else {
        break;
      }
    }
    pos++;
    y >>= 1;
  }

  if (no == 1) {
    printf("NOOOO\n");
  }

  return 0;
}
 
