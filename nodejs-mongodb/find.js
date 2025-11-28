const { MongoClient } = require('mongodb');
const url = "mongodb://localhost:27017";
const dbName = "testdb";

async function run() {
  const client = new MongoClient(url);

  try {
    await client.connect();
    console.log("Connected to MongoDB");

    const db = client.db(dbName);
    const collection = db.collection("books");
    
    const result = await collection.findOne({});
    console.log("1 document found:", result);

  } catch (err) {
    console.error("Error:", err);
  } finally {
    await client.close();
  }
}

run();
