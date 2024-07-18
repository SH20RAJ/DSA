/**
 * Generates a random number between the specified minimum and maximum values.
 *
 * @param {number} min - The minimum value of the range (inclusive).
 * @param {number} max - The maximum value of the range (exclusive).
 * @returns {string} The random number generated.
 */
let random = (min,max) =>parseInt(((Math.random() * (max - min) + min)).toString().split(".")[0]);


console.log(random(1, 10));