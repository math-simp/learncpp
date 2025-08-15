int main()
{
    goto skip; // error: this jump is illegal because...
    // int x{5};  // this initialized variable is still in scope at statement label 'skip'
skip:
    // x += 3; // what would this even evaluate to if x wasn't initialized?
    return 0;
}