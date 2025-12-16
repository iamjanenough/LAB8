char findGrade(double x) {
    if(x > 90){
        return 'A';
    }
    else if(x > 75 && x <= 90){
        return 'B';
    }
    else if(x > 60 && x <= 75){
        return 'C';
    }
    else if(x > 45 && x <= 60){
        return 'D';
    }
    else{
        return 'F';
    }
}
