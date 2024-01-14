document.addEventListener('DOMContentLoaded', function() {
    const taskInput = document.getElementById('task');
    const addTaskButton = document.getElementById('addTask');
    const taskList = document.getElementById('taskList');

    addTaskButton.addEventListener('click', function() {
        const taskText = taskInput.value.trim();

        if (taskText !== '') {
            const listItem = document.createElement('li');
            listItem.innerHTML = `
                ${taskText}
                <button>Delete</button>
            `;

            taskList.appendChild(listItem);

            // Clear the input field
            taskInput.value = '';

            // Add an event listener to delete the task
            const deleteButton = listItem.querySelector('button');
            deleteButton.addEventListener('click', function() {
                taskList.removeChild(listItem);
            });
        }
    });

    // Allow adding tasks by pressing Enter key
    taskInput.addEventListener('keydown', function(event) {
        if (event.key === 'Enter') {
            addTaskButton.click();
        }
    });
});
