import React from "react";
import Header from "./Header";
import HeroSection from "./HeroSection";
import Footer from "./Footer";
import TaskBoard from "./Task/TaskBoard";

const App = () => {
  return (
    <div>
      <Header></Header>
      <div className="flex flex-col justify-end items-center">
      <HeroSection></HeroSection>
      <TaskBoard></TaskBoard>
      </div>
      <Footer></Footer>
    </div>
  );
};

export default App;
