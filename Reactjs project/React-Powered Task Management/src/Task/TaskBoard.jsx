import React from "react";
import SearchTask from "./SearchTask";
import TaskAction from "./TaskAction";
import TaskList from "./TaskList";
import { useState } from "react";
import AddTaskModal from "./AddTaskModal";

const TaskBoard = () => {
  const defaultTask = {
    id: crypto.randomUUID(),
    title: "Task 1",
    description: "This is a sample task",
    tags: ["web", "React", "js"],
    priority: "High",
    isFavorite: false,
  };
  const [tasks, setTask] = useState([defaultTask]);
  const [showAddModal,setShowAddModal]=useState(false);
  const handelAddTask = (newTask) => {
   setTask(...tasks,newTask);
   setShowAddModal(false);
  };

  return (
    <>
      <section className="mb-20" id="tasks">
       {showAddModal &&  <AddTaskModal onSave={handelAddTask}/> }
        <div className="container">
          <div className="p-2 flex justify-end">
            <SearchTask></SearchTask>
          </div>

          <div className="rounded-xl border border-[rgba(206,206,206,0.12)] bg-[#1D212B] px-6 py-8 md:px-9 md:py-16">
            <TaskAction onAddClick={()=>setShowAddModal(true)}></TaskAction>
            <TaskList tasks={tasks}></TaskList>
          </div>
        </div>
      </section>
    </>
  );
};

export default TaskBoard;
