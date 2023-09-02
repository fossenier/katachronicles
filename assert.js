export { assertEquals };

function assertEquals(actual, expected) {
    if (actual !== expected) {
      throw new Error(`Assertion failed: ${actual} !== ${expected}`);
    }
  }
  