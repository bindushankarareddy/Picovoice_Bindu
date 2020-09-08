int func(char * s, int index, char match) {
  while (s[index]) {
    if (match != '.' && s[index] != match) return index;
    index++;
  }
  return index;
}

bool regexFunc(char * s, char * p, int index, int new_index) {
  while (p[new_index]) {
    if (p[new_index+1] == '*') {
      // *
      int lastCur = func(s, index, p[new_index]);
      int newCur = -1;
      if (lastCur) {
        for (int i=lastCur; i>index; i--) {
          if (regexFunc(s, p, i, new_index + 2)) {
            newCur = i;
            break;
          }
        }
        if (newCur != -1) index = newCur;
      }
      new_index+=2;
      continue;
    }
    if (!s[index]) return false;
    if (p[new_index] != '.' && p[new_index] != s[index]) return false;
    index++;
    new_index++;
  }
  return !s[index];
}

bool callThisFunction(char * s, char * p){
  return regexFunc(s, p, 0, 0);
}