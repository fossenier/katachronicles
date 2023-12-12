db_path = ARGV[1] || "./kata-5.db"
sql_path = ARGV[2] || "./solution.sql"

require 'sqlite3'

db = SQLite3::Database.new db_path
db.results_as_hash = true
file_path = sql_path

def run_sql(file_path, db)
  query = File.read(file_path)
  results = db.execute(query)
  results
end

results = run_sql(file_path, db)

greetings = results.map { |row| row['greeting'] }

expected_output = [
  "\"Hello, Amb. Georgann D'Amore how are you doing today?\"",
  "\"Hello, Erin Abshire how are you doing today?\"",
  "\"Hello, The Hon. Velva Daugherty how are you doing today?\"",
  "\"Hello, Lisette Thompson how are you doing today?\"",
  "\"Hello, Pres. Miguel Beahan how are you doing today?\"",
  "\"Hello, Basilia Larkin how are you doing today?\"",
  "\"Hello, Iluminada Heller DC how are you doing today?\"",
  "\"Hello, Alphonse Dietrich how are you doing today?\"",
  "\"Hello, Ms. Oliver Schulist how are you doing today?\"",
  "\"Hello, Ron Bergnaum how are you doing today?\""
]

describe :query do
  describe :content do
    it "should return correct greetings" do
      expect(greetings).to eq expected_output
    end
  end
end
