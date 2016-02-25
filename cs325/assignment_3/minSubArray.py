def solution(A):
    lsum, rsum = A[0], sum(A[1:])
    diff = abs(rsum - lsum)
    p = 1
    while p < (len(A)-1):
        lsum += A[p]
        rsum -= A[p]
        next = abs(rsum - lsum)
        if next < diff:
            diff = next
        p += 1
    return diff

val = solution([31, -41, 59, 26, -53, 58, -6, 97, -93, -23])
print 'val: ', val