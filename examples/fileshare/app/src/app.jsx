import { createEffect } from 'solid-js';
import { useNavigate } from '@solidjs/router';
import { IoAdd, IoCogSharp } from 'solid-icons/io';

import Files from './files';

import './app.css';

function App(props) {
	const nav = useNavigate();

	createEffect(() => {
		if (!props.user.id) {
			nav('/sign-up', { replace: true });
		}
	});

	return (
		<div class="app">
			<div class="toolbar">
				<button><IoCogSharp /></button>
				<button onClick={() => {nav('/files/:new');}}>
					<IoAdd />
					<span>New File</span>
				</button>
			</div>

			<Files user={props.user} />
		</div>
	);
}

export default App;
