ll binary_exp(ll base,ll power)
    {
        if(power==0)
            return 1;
        else if(power==1)
            return base % mod;
        else
            {
                ll temp = binary_exp(base,power/2);
                temp  = (temp * temp) % mod; /// (x`n/2 * x`n/2)%mod

                if(power %2 ==0)
                    return temp;
                else
                    return ((base%mod) * temp)%mod; /// x * temp, as power is odd
            }
    }
///if forgot watch the simulation of theory of programming modular arithmatic to hacker rank discussion of sherloch and permutations
