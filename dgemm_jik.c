const char* dgemm_desc = "Loop ordering of jik";

void square_dgemm(const int M, const double *A, const double *B, double *C) {
  int i, j, k;
  for (j = 0; j < M; ++j) {
    for (i = 0; i < M; ++i) {
      for (k = 0; k < M; ++k) {
        double cij = C[j*M+i];
        cij += A[k*M+i] * B[j*M+k];
        C[j*M+i] = cij;
      }
    }
  }
}
