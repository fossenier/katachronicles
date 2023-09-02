import { assertEquals } from "../../../../assert.js";
import { chromosomeCheck } from "./solution.js"

describe("Tests", () => {
  it("test", () => {
      assertEquals(chromosomeCheck('XY'), "Congratulations! You're going to have a son.")
      assertEquals(chromosomeCheck('XX'), "Congratulations! You're going to have a daughter.")
  });
});