int check_string(char *str) {
  int i;
  for (i = 0; str[i] != '\0'; i++) {
    if (str[i] != '0' && str[i] != '1') {
      return 1;
    }
  }
  return 0;
}

int main() {
  char *str = "1010";
  int result = check_string(str);

  if (result == 0) {
    printf("The string contains only 0 and 1.\n");
  } else {
    printf("The string contains other characters besides 0 and 1.\n");
  }

  return 0;
}
