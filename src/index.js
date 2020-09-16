/**
 * @param {number} num
 * @returns {number} The smallest divident of `num`
 */
const getSmallestDivident = (num) => {
    for (let i = 2; i < num + 1; i++) {
        if (num % i === 0) return i;
    }
};

/**
 * @param {number} num The number to get the prime factors of
 * @returns {number[]} Prime factors of `num`
 */
const primeFactorizing = (num) => {
    let factors = [];
    let current = parseInt(num);
    let dividend;
    while (current > 1) {
        dividend = getSmallestDivident(parseInt(current));
        factors.push(dividend);
        current /= dividend;
    }
    return factors;
};

module.exports = { primeFactorizing };
