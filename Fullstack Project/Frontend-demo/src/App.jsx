import { useEffect, useState } from "react";
import axios from "axios";

const App = () => {
  const [jokes, setJokes] = useState([]);
  useEffect(() => {
    axios
      .get("/api/jokes")
      .then((Response) => {
        setJokes(Response.data);
      })
      .catch((error) => {
        console.error("Error fetching jokes: ", error);
      });
  });
  return (
    <div>
      <h1 className="text-center text-2xl"> Frontend demo project</h1>
      <p className="text-center text-xl">Jokes : {jokes.length}</p>
      {jokes.map((joke) => (
        <div key={joke.id}>
          <p>{joke.title}</p>
          <p>{joke.content}</p>
        </div>
      ))}
    </div>
  );
};

export default App;
