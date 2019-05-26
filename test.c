int i = 1, rez, val;
while (i < n) {
  if ((child_pid = fork()) == 0) {
    if (i == 1) {
      rez = cmmdc(a[i], a[i+1]);
      i+=2;
    } else {
      val = cmmdc(rez, a[i]);
      i++;
    }
    exit(0);
  }


}
