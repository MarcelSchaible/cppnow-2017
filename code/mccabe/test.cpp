int f(int x) {
  return x;
}

int g(int x) {
  if (x > 0) {
    return x;
  }
  return -x;
}

int h(int x) {
  if (x > 0) {
    if (x < 30) {
      if (x > 5) {
        if (x < 2) {
          return x;
        }
      } else {
        if (x == 5) {
          return 3;
        }
      }
    }
  }
  return x;
}
