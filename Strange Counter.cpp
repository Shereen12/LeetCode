long strangeCounter(long t) {
    long time = 3;
    while(true){
        t -= time;
        if(t <= 0){
            t += time;
            return time - t + 1;
        }
        time *= 2;
    }
}
