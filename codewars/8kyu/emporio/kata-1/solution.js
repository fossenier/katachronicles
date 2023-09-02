export { chromosomeCheck };

function chromosomeCheck(sperm) {
    // Check for male gametes
    if (sperm == 'XY') {
      return "Congratulations! You're going to have a son.";
    }
    // Assume opposite gametes
    return "Congratulations! You're going to have a daughter.";
  }