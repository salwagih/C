bool valid_triangle(float x , float y , float z);

bool valid_triangle(float x , float y , float z){
  if (x <= 0 || y <= 0 || z <= 0)
  {
    return false;
  }
  if ((x + y <= z) || (x + z <= y) ||  (z + y <= x))
  {
    return false;
  }
  return true;
}

