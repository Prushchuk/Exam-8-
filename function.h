#pragma once
#include "sklad.h"
void add_tovar(Sklad sklads[], int& sklads_count);
void delete_tovar(Sklad sklads[], int& sklads_count, int index);
void zamina_tovar(Sklad sklads[], int& sklads_count, int index);
void search_tovar(Sklad sklads[], int& sklads_count, int index);
void sortByTovar(Sklad sklads[], int& sklads_count);
